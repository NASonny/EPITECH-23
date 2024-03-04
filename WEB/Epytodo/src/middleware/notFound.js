/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** middleware/notFound
*/

export default function notFound(req, res) {
    res.header("Content-Type", "json");
    res.status(404).end(JSON.stringify({ msg: "Not found" }));
}
