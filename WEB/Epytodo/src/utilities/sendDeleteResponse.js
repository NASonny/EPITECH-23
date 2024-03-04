/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/sendDeleteResponse
*/

import * as errors from "./errors.js";

export default function sendDeleteResponse(route, existed, err, id, res)
{
    if (existed === false) {
        errors.notFound(`/${route}/:id`, res);
        return;
    }
    if (err) {
        console.log(err);
        errors.internalServerError(`/${route}/:id`, res);
        return;
    }
    res.status(200).end(JSON.stringify({ msg: `Successfully deleted record number: ${id}` }));
}
