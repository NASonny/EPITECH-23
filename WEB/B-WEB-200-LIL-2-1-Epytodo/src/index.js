/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** index
*/

import * as dotenv from "dotenv";
import express from "express";
import bodyParser from "body-parser";

import {connectToDatabase} from "./config/db.js";
import auth from "./middleware/auth.js";
import notFound from "./middleware/notFound.js";
import registerRouter from "./routes/auth/register.js";
import loginRouter from "./routes/auth/login.js";
import userRouter from "./routes/user/user.js";
import usersRouter from "./routes/user/users.js";
import todosRouter from "./routes/todos/todos.js";

dotenv.config();

const app = express();

const port = Number(process.env.SERVER_PORT);

export const connection = connectToDatabase();

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

app.use("/register", registerRouter);
app.use("/login", loginRouter);
app.use("/user", auth, userRouter);
app.use("/users", auth, usersRouter);
app.use("/todos", auth, todosRouter);
app.use(notFound);

app.listen(port, () => {
    console.log(`\x1b[1;32mServer started on port ${port}\x1b[0m`);
});
