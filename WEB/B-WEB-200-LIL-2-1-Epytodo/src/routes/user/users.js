/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/users
*/

import express from "express";

import * as errors from "../../utilities/errors.js";
import registerRequestBodyIsValid from "../../utilities/registerRequestBodyIsValid.js";
import hashPassword from "../../utilities/hashPassword.js";
import * as getUserFromDatabase from "./user.query.js";
import * as sendResponse from "./response.js";
import {updateUserInDatabase, deleteUserFromDatabase} from "./user.query.js";
import sendDeleteResponse from "../../utilities/sendDeleteResponse.js";

import {connection} from "../../index.js";

const router = express.Router();

router.get("/:user", (req, res) => {
    console.log("\n\x1b[0;32mReceived GET request on /users/:user\x1b[0m");
    res.header("Content-Type", "json");
    if (/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(req.params.user) === true) {
        getUserFromDatabase.byEmail(connection, req.params.user, sendResponse.get, res);
        return;
    }
    if (isNaN(req.params.user) === false) {
        getUserFromDatabase.byId(connection, req.params.user, sendResponse.get, res);
        return;
    }
    errors.badParameter("/users/:user", res);
});

router.put("/:id", (req, res) => {
    const user = {
        email: req.body.email,
        name: req.body.name,
        firstname: req.body.firstname,
        password: hashPassword(req)
    };

    console.log("\n\x1b[0;32mReceived PUT request on /users/:id\x1b[0m");
    res.header("Content-Type", "json");
    if (isNaN(req.params.id) || user.password === null || registerRequestBodyIsValid(req.body) === false) {
        errors.badParameter("/users/:id", res);
        return;
    }
    updateUserInDatabase(connection, user, req.params.id, sendResponse.get, res);
});

router.delete("/:id", (req, res) => {
    console.log("\n\x1b[0;32mReceived DELETE request on /users/:id\x1b[0m");
    res.header("Content-Type", "json");
    if (isNaN(req.params.id)) {
        errors.badParameter("/users/:id", res);
        return;
    }
    deleteUserFromDatabase(connection, req.params.id, sendDeleteResponse, res);
});

export default router;
