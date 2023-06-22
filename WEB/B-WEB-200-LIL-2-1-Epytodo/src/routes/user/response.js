/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/response
*/

import getDate from "../../utilities/getDate.js";
import tableFromResults from "../../utilities/tableFromResults.js";
import * as errors from "../../utilities/errors.js";

export function get(err, results, res)
{
    if (err) {
        errors.internalServerError("/user", res);
        return;
    }
    if (results !== undefined && results.length !== 0) {
        res.status(200).end(JSON.stringify({
            id: results[0].id.toString(),
            email: results[0].email,
            password: results[0].password,
            created_at: getDate(results[0].created_at),
            firstname: results[0].firstname,
            name: results[0].name
        }));
    } else
        errors.notFound("/user", res);
}

export function getTodos(err, results, res)
{
    if (err) {
        errors.internalServerError("/user/todos", res);
        return;
    }
    res.status(201).end(JSON.stringify(tableFromResults(results)));
}
