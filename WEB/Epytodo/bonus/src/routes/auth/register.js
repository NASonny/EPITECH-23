/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/register
*/

import express from "express";
import jwt from "jsonwebtoken";
import bcrypt from "bcryptjs";

import valueIsNotNull from "../../utilities/value_is_not_null.js";
import {addUserToDatabase} from "./auth.query.js";

import {connection} from "../../index.js";

const router = express.Router();

function registerRequestBodyIsValid(body)
{
    if (Object.keys(body).length !== 4 || body.email === undefined || body.name === undefined || body.firstname === undefined)
        return false;
    body.email = body.email.trim();
    body.name = body.name.trim();
    body.firstname = body.firstname.trim();
    if (/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(body.email) === false)
        return false;
    return valueIsNotNull(body.email) && valueIsNotNull(body.name) && valueIsNotNull(body.firstname);
}

function sendResponse(err, id, res)
{
    if (err) {
        if (err.code === "ER_DUP_ENTRY") {
            console.log("/register: Account already exists");
            res.status(409).end(JSON.stringify({ msg: "Account already exists" }));
        } else {
            console.log("/register: Internal server error");
            res.status(500).end(JSON.stringify({ msg: "Internal server error" }));
        }
        return;
    }
    res.status(201).end(JSON.stringify({
        token: jwt.sign({ id: id }, process.env.SECRET, { expiresIn: "1w" })
    }));
}

function hashPassword(req)
{
    if (req.body.password === undefined || req.body.password === null || req.body.password.trim() === '')
        return null;
    return bcrypt.hashSync(req.body.password, bcrypt.genSaltSync(10));
}

router.post("/", (req, res) => {
    const user = {
        email: req.body.email,
        name: req.body.name,
        firstname: req.body.firstname,
        password: hashPassword(req)
    };

    console.log("Received POST request on /register");
    res.header("Content-Type", "json");
    if (user.password === null || registerRequestBodyIsValid(req.body) === false) {
        console.log("/register: Bad parameter");
        res.status(400).end(JSON.stringify({ msg: "Bad parameter" }));
        return;
    }
    addUserToDatabase(connection, user, sendResponse, res);
});

export default router;
