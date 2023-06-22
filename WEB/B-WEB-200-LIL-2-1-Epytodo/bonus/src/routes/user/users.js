/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/users
*/

import express from "express";

import * as getUserFromDatabase from "./user.query.js";
import sendResponse from "./response.js";

import {connection} from "../../index.js";

const router = express.Router();

router.get("/:user", (req, res) => {
    console.log("Received GET request on /user/:user");
    res.header("Content-Type", "json");
    if (/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(req.params.user) === true) {
        getUserFromDatabase.byEmail(connection, req.params.user, sendResponse, res);
        return;
    }
    if (isNaN(req.params.user) === false) {
        getUserFromDatabase.byId(connection, req.params.user, sendResponse, res);
        return;
    }
    console.log("/user/:user: Bad parameter");
    res.status(400).end(JSON.stringify({ msg: "Bad parameter" }));
});

export default router;
