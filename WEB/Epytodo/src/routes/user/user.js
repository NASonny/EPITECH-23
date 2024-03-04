/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/user
*/

import express from "express";

import * as getUserFromDatabase from "./user.query.js";
import * as sendResponse from "./response.js";

import {connection} from "../../index.js";

const router = express.Router();

router.get("/", (req, res) => {
    console.log("\n\x1b[0;32mReceived GET request on /user\x1b[0m");
    res.header("Content-Type", "json");
    getUserFromDatabase.byId(connection, req.userId, sendResponse.get, res);
});

router.get("/todos", (req, res) => {
    console.log("\n\x1b[0;32mReceived GET request on /user/todos\x1b[0m");
    res.header("Content-Type", "json");
    getUserFromDatabase.todos(connection, req.userId, sendResponse.getTodos, res);
});

export default router;
