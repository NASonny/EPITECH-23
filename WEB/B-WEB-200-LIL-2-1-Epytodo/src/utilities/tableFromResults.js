/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/tableFromResults
*/

import getDate from "./getDate.js";

export default function tableFromResults(results)
{
    let todos = [];

    results.forEach((result) => {
        todos.push({
            id: result.id.toString(),
            title: result.title,
            description: result.description,
            created_at: getDate(result.created_at),
            due_time: getDate(result.due_time),
            user_id: result.user_id.toString(),
            status: result.status
        });
    });
    return todos;
}
