/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/register
*/

import express from "express";
import jwt from "jsonwebtoken";

import * as errors from "../../utilities/errors.js";
import registerRequestBodyIsValid from "../../utilities/registerRequestBodyIsValid.js";
import hashPassword from "../../utilities/hashPassword.js";
import {addUserToDatabase} from "./auth.query.js";

import {connection} from "../../index.js";

const router = express.Router();

function sendResponse(err, id, res)
{
    if (err) {
        if (err.code === "ER_DUP_ENTRY") {
            console.error("\x1b[31m/register: Account already exists\x1b[0m");
            res.status(409).end(JSON.stringify({ msg: "Account already exists" }));
        } else {
            errors.internalServerError("/register", res);
        }
        return;
    }
    res.status(201).end(JSON.stringify({
        token: jwt.sign({ id: id }, process.env.SECRET, { algorithm: "HS256", expiresIn: "1w" })
    }));
}

router.post("/", (req, res) => {
    const user = {
        email: req.body.email,
        name: req.body.name,
        firstname: req.body.firstname,
        password: hashPassword(req)
    };

    console.log("\n\x1b[0;32mReceived POST request on /register\x1b[0m");
    res.header("Content-Type", "json");
    if (user.password === null || registerRequestBodyIsValid(req.body) === false) {
        errors.badParameter("/register", res);
        return;
    }
    addUserToDatabase(connection, user, sendResponse, res);
});

export default router;
