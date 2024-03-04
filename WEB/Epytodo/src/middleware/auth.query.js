/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** middleware/auth.query
*/

export default function checkIfUserExists(connection, callback, req, res, next)
{
    connection.query(
        "SELECT * FROM user WHERE id = ?",
        [req.userId],
        (err, results) => {
            callback(req, res, next, results.length === 0);
        });
}
