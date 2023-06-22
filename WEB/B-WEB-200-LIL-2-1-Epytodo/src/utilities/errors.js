/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/errors
*/

export function notFound(route, res)
{
    console.error(`\x1b[31m${route}: Not found\x1b[0m`);
    res.status(404).end(JSON.stringify({ msg: "Not found" }));
}

export function badParameter(route, res)
{
    console.error(`\x1b[31m${route}: Bad parameter\x1b[0m`);
    res.status(400).end(JSON.stringify({ msg: "Bad parameter" }));
}

export function internalServerError(route, res)
{
    console.error(`\x1b[31m${route}: Internal server error\x1b[0m`);
    res.status(500).end(JSON.stringify({ msg: "Internal server error" }));
}
