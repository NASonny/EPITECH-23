/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** config/db
*/

import mysql from "mysql2";

export function connectToDatabase() {
    return mysql.createConnection({
        host: process.env.MYSQL_HOST,
        user: process.env.MYSQL_USER,
        password: process.env.MYSQL_ROOT_PASSWORD,
        database: process.env.MYSQL_DATABASE
    });
}
