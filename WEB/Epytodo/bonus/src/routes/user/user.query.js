/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/user.query
*/

// Get user from database by id
export function byId(connection, userId, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE id = ?",
        [userId],
        (err, results) => {
            callback(err, results, res);
        }
    )
}

// Get user from database by email
export function byEmail(connection, email, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE email = ?",
        [email],
        (err, results) => {
            callback(err, results, res);
        }
    )
}
