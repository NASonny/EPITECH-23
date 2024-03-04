/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/response
*/

import getDate from "../../utilities/get_date.js";

export default function sendResponse(err, results, res)
{
    if (err) {
        console.log("/user: Internal server error");
        res.status(500).end(JSON.stringify({ msg: "Internal server error" }));
        return;
    }
    if (results !== undefined && results.length !== 0) {
        res.status(200).end(JSON.stringify({
            id: results[0].id,
            email: results[0].email,
            password: results[0].password,
            created_at: getDate(results[0].created_at),
            firstname: results[0].firstname,
            name: results[0].name
        }));
    } else {
        console.log("/user: Not found");
        res.status(404).end(JSON.stringify({ msg: "Not found" }));
    }
}
