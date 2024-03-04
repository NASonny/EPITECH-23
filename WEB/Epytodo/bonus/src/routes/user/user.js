/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/user
*/

import express from "express";
import jwt from "jsonwebtoken";

import * as getUserFromDatabase from "./user.query.js";
import sendResponse from "./response.js";

import {connection} from "../../index.js";

const router = express.Router();

/// TODO: Add Token verification middleware, and store userId in req.userId + check if id is number
router.get("/", (req, res) => {
    let userId;

    console.log("Received GET request on /user");
    res.header("Content-Type", "json");
    try {
        let token = req.headers.authorization;

        if (token.startsWith("Bearer ") === true)
            token = token.substring(7);
        userId = jwt.verify(token, process.env.SECRET).id;
    } catch (err) {
        console.log(err);
        /// TODO: Send response
        return;
    }
    getUserFromDatabase.byId(connection, userId, sendResponse, res);
});

export default router;
