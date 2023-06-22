/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/user/auth.query
*/

function insertUser(connection, user, callback, res)
{
    connection.query(
        "INSERT INTO user (email, name, firstname, password) VALUES (?, ?, ?, ?)",
        [user.email, user.name, user.firstname, user.password],
        (err, results) => {
            callback(err, results.insertId, res);
        });
}

export function addUserToDatabase(connection, user, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE email = ?",
        [user.email],
        (err, results) => {
            if (results !== undefined && results.length !== 0)
                callback({ code: "ER_DUP_ENTRY" }, 1, res);
            else
                insertUser(connection, user, callback, res);
        }
    )
}

export function getUserFromDatabase(connection, req, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE email = ?",
        [req.body.email],
        (err, results) => {
            callback(err, results, req, res);
        }
    )
}
