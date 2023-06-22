/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** routes/todos/todos.query
*/

export function getTodoFromDatabase(connection, id, callback, res)
{
    connection.query(
        "SELECT * FROM todo WHERE id = ?",
        [id],
        (err, results) => {
            callback(err, results, res);
        });
}

export function getTodosFromDatabase(connection, callback, res)
{
    connection.query(
        "SELECT * FROM todo",
        (err, results) => {
            callback(err, results, res);
        });
}

export function addTodoToDatabase(connection, body, callback, res)
{
    connection.query(
        "INSERT INTO todo (title, description, due_time, status, user_id) VALUES (?, ?, ?, ?, ?)",
        [body.title, body.description, body.due_time, body.status, body.user_id],
        (err, results) => {
            if (err)
                callback(err, results, res);
            else
                getTodoFromDatabase(connection, results.insertId, callback, res);
        });
}

export function updateTodoInDatabase(connection, body, id, callback, res)
{
    connection.query(
        "SELECT * FROM todo WHERE id = ?",
        [id],
        (err, results) => {
            if (err || results.length === 0)
                callback(err, results, res);
            else
                connection.query(
                    "UPDATE todo SET ? WHERE id = ?",
                    [body, id],
                    (err) => {
                        callback(err, [body], res);
                    });
        });
}

export function deleteTodoFromDatabase(connection, id, callback, res)
{
    connection.query(
        "SELECT * FROM todo WHERE id = ?",
        [id],
        (err, results) => {
            if (err || results.length === 0)
                callback("todos", false, err, results, res);
            else
                connection.query(
                    "DELETE FROM todo WHERE id = ?",
                    [id],
                    (err) => {
                        callback("todos", true, err, id, res);
                    });
        });
}
