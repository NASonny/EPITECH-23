/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/todos/todos
*/

import express from "express";

import valueIsNotNull from "../../utilities/valueIsNotNull.js";
import getDate from "../../utilities/getDate.js";
import tableFromResults from "../../utilities/tableFromResults.js";
import * as errors from "../../utilities/errors.js";
import {getTodoFromDatabase, getTodosFromDatabase, addTodoToDatabase, updateTodoInDatabase, deleteTodoFromDatabase} from "./todos.query.js";
import sendDeleteResponse from "../../utilities/sendDeleteResponse.js";

import {connection} from "../../index.js";

const router = express.Router();

function todosRequestBodyIsValid(body)
{
    if (Object.keys(body).length !== 5 || body.title === undefined || body.description === undefined || body.due_time === undefined || body.user_id === undefined || body.status === undefined)
        return false;
    body.title = body.title.trim();
    body.description = body.description.trim();
    body.due_time = body.due_time.trim();
    body.user_id = body.user_id.trim();
    body.status = body.status.trim();
    if (/^\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}$/.test(body.due_time) === false)
        return false;
    if (isNaN(body.user_id))
        return false;
    if (body.status !== "not started" && body.status !== "todo" && body.status !== "in progress" && body.status !== "done")
        return false;
    return valueIsNotNull(body.title) && valueIsNotNull(body.description) && valueIsNotNull(body.user_id);
}

function sendTodo(results, res)
{
    res.status(201).end(JSON.stringify({
        id: results[0].id.toString(),
        title: results[0].title,
        description: results[0].description,
        created_at: getDate(results[0].created_at),
        due_time: getDate(results[0].due_time),
        user_id: results[0].user_id.toString(),
        status: results[0].status
    }));
}

function sendPostResponse(err, results, res)
{
    if (err && err.code === "ER_NO_REFERENCED_ROW_2") {
        console.error("\x1b[31m/todos: Not found\x1b[0m");
        res.status(422).end(JSON.stringify({ msg: "Not found" }));
        return;
    }
    if (err) {
        errors.internalServerError("/todos", res);
        return;
    }
    sendTodo(results, res);
}

router.post("/", (req, res) => {
    console.log("\n\x1b[0;32mReceived POST request on /todos\x1b[0m");
    res.header("Content-Type", "json");
    if (todosRequestBodyIsValid(req.body) === false) {
        errors.badParameter("/todos", res);
        return;
    }
    req.body.due_time = new Date(req.body.due_time);
    addTodoToDatabase(connection, req.body, sendPostResponse, res);
});

function sendGetResponse(err, results, res)
{
    if (err) {
        errors.internalServerError("/todos", res);
        return;
    }
    res.status(201).end(JSON.stringify(tableFromResults(results)));
}

router.get("/", (req, res) => {
    console.log("\n\x1b[0;32mReceived GET request on /todos\x1b[0m");
    res.header("Content-Type", "json");
    getTodosFromDatabase(connection, sendGetResponse, res);
});

function sendGetIdResponse(err, results, res)
{
    if (err) {
        errors.internalServerError("/todos", res);
        return;
    }
    if (results.length === 0) {
        errors.notFound("/todos", res);
        return;
    }
    sendTodo(results, res);
}

router.get("/:id", (req, res) => {
    console.log("\n\x1b[0;32mReceived GET request on /todos/:id\x1b[0m");
    res.header("Content-Type", "json");
    if (isNaN(req.params.id)) {
        errors.badParameter("/todos/:id", res);
        return;
    }
    getTodoFromDatabase(connection, req.params.id, sendGetIdResponse, res);
});

function sendPutResponse(err, results, res)
{
    if (err) {
        errors.internalServerError("/todos", res);
        return;
    }
    if (results !== undefined && results.length !== 0) {
        res.status(200).end(JSON.stringify({
            title: results[0].title,
            description: results[0].description,
            due_time: getDate(results[0].due_time),
            user_id: results[0].user_id.toString(),
            status: results[0].status
        }));
    } else
        errors.notFound("/todos", res);
}

router.put("/:id", (req, res) => {
    console.log("\n\x1b[0;32mReceived PUT request on /todos/:id\x1b[0m");
    res.header("Content-Type", "json");
    if (isNaN(req.params.id) || todosRequestBodyIsValid(req.body) === false) {
        errors.badParameter("/users/:id", res);
        return;
    }
    updateTodoInDatabase(connection, req.body, req.params.id, sendPutResponse, res);
});

router.delete("/:id", (req, res) => {
    console.log("\n\x1b[0;32mReceived DELETE request on /todos/:id\x1b[0m");
    res.header("Content-Type", "json");
    if (isNaN(req.params.id)) {
        errors.badParameter("/todos/:id", res);
        return;
    }
    deleteTodoFromDatabase(connection, req.params.id, sendDeleteResponse, res);
});

export default router;
