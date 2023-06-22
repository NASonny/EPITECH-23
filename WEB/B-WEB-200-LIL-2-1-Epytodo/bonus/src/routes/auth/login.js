/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/auth/login
*/

import express from "express";
import jwt from "jsonwebtoken";
import bcrypt from "bcryptjs";

import valueIsNotNull from "../../utilities/value_is_not_null.js";
import {getUserFromDatabase} from "./auth.query.js";

import {connection} from "../../index.js";

const router = express.Router();

function loginRequestBodyIsValid(body)
{
    if (Object.keys(body).length !== 2 || body.email === undefined)
        return false;
    body.email = body.email.trim();
    if (/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(body.email) === false)
        return false;
    return valueIsNotNull(body.email);

}

function sendResponse(err, results, req, res)
{
    if (err) {
        console.log("/login: Internal server error");
        res.status(500).end(JSON.stringify({ msg: "Internal server error" }));
        return;
    }
    if (bcrypt.compareSync(req.body.password, results[0].password) && results !== undefined && results.length !== 0) {
        res.status(201).end(JSON.stringify({
            token: jwt.sign({ id: results[0].id }, process.env.SECRET, { expiresIn: "1w" })
        }));
    } else {
        console.log("/login: Invalid Credentials");
        res.status(401).end(JSON.stringify({ msg: "Invalid Credentials" }));
    }
}

router.post("/", (req, res) => {
    console.log("Received POST request on /login");
    res.header("Content-Type", "json");
    if (loginRequestBodyIsValid(req.body) === false) {
        console.log("/login: Bad parameter");
        res.status(400).end(JSON.stringify({ msg: "Bad parameter" }));
        return;
    }
    getUserFromDatabase(connection, req, sendResponse, res);
});

export default router;
