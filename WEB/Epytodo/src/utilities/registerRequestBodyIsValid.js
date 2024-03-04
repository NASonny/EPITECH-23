/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/registerRequestBodyIsValid
*/

import valueIsNotNull from "./valueIsNotNull.js";

export default function registerRequestBodyIsValid(body)
{
    if (Object.keys(body).length !== 4 || body.email === undefined || body.name === undefined || body.firstname === undefined)
        return false;
    body.email = body.email.trim();
    body.name = body.name.trim();
    body.firstname = body.firstname.trim();
    if (/^[^\s@]+@[^\s@]+\.[^\s@]+$/.test(body.email) === false)
        return false;
    return valueIsNotNull(body.name) && valueIsNotNull(body.firstname);
}
