/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** middleware/auth
*/

import jwt from "jsonwebtoken";

import checkIfUserExists from "./auth.query.js";

import {connection} from "../index.js";

function invalidToken(res)
{
    console.error("\n\x1b[31m/user: Token is not valid\x1b[0m");
    res.status(401).end(JSON.stringify({ msg: "Token is not valid" }));
}

function callNext(req, res, next, userExists)
{
    if (userExists)
        invalidToken(res);
    else
        next();
}

export default function auth(req, res, next)
{
    let token = req.headers.authorization;

    res.header("Content-Type", "json");
    try {
        if (token === undefined || token === null || token === "") {
            console.error("\n\x1b[31m/user: No token, authorization denied\x1b[0m");
            res.status(401).end(JSON.stringify({msg: "No token, authorization denied"}));
            return;
        }
        if (token.startsWith("Bearer ") === true)
            token = token.substring(7);
        req.userId = jwt.verify(token, process.env.SECRET, { algorithm: "HS256" }).id;
        if (req.userId === null || req.userId === "" || isNaN(req.userId))
            invalidToken(res);
        else
            checkIfUserExists(connection, callNext, req, res, next);
    } catch (err) {
        invalidToken(res);
    }
}
