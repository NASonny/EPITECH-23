/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/auth/login
*/

import express from "express";
import jwt from "jsonwebtoken";
import bcrypt from "bcryptjs";

import * as errors from "../../utilities/errors.js";
import {getUserFromDatabase} from "./auth.query.js";

import {connection} from "../../index.js";

const router = express.Router();

function loginRequestBodyIsValid(body)
{
    if (Object.keys(body).length !== 2 || body.email === undefined)
        return false;
    body.email = body.email.trim();
    return /^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(body.email) !== false;


}

function sendResponse(err, results, req, res)
{
    if (err) {
        errors.internalServerError("/login", res);
        return;
    }
    if (results !== undefined && results.length !== 0 && bcrypt.compareSync(req.body.password, results[0].password)) {
        res.status(201).end(JSON.stringify({
            token: jwt.sign({ id: results[0].id }, process.env.SECRET, { algorithm: "HS256", expiresIn: "1w" })
        }));
    } else {
        console.error("\x1b[31m/login: Invalid Credentials\x1b[0m");
        res.status(401).end(JSON.stringify({ msg: "Invalid Credentials" }));
    }
}

router.post("/", (req, res) => {
    console.log("\n\x1b[0;32mReceived POST request on /login\x1b[0m");
    res.header("Content-Type", "json");
    if (loginRequestBodyIsValid(req.body) === false) {
        errors.badParameter("/login", res);
        return;
    }
    getUserFromDatabase(connection, req, sendResponse, res);
});

export default router;
