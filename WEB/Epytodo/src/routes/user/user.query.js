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
        });
}

// Get user from database by email
export function byEmail(connection, email, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE email = ?",
        [email],
        (err, results) => {
            callback(err, results, res);
        });
}

// Get user todos from database
export function todos(connection, userId, callback, res)
{
    connection.query(
        "SELECT * FROM todo WHERE user_id = ?",
        [userId],
        (err, results) => {
            callback(err, results, res);
        });
}

export function updateUserInDatabase(connection, user, id, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE id = ?",
        [id],
        (err, results) => {
            if (err || results.length === 0)
                callback(err, results, res);
            else
                connection.query(
                    "UPDATE user SET ? WHERE id = ?",
                    [user, id],
                    (err) => {
                        user.id = id;
                        user.created_at = results[0].created_at;
                        callback(err, [user], res);
                    });
        });
}

export function deleteUserFromDatabase(connection, id, callback, res)
{
    connection.query(
        "SELECT * FROM user WHERE id = ?",
        [id],
        (err, results) => {
            if (err || results.length === 0)
                callback("users", false, err, results, res);
            else
                connection.query(
                    "DELETE FROM user WHERE id = ?",
                    [id],
                    (err) => {
                        callback("users", true, err, id, res);
                    });
        });
}
