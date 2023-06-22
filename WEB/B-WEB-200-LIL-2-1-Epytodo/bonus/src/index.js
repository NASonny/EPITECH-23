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
import registerRouter from "./routes/auth/register.js";
import loginRouter from "./routes/auth/login.js";
import userRouter from "./routes/user/user.js";
import usersRouter from "./routes/user/users.js";

dotenv.config();

const app = express();

const port = Number(process.env.SERVER_PORT);

export const connection = connectToDatabase();

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({ extended: true }));

app.use("/register", registerRouter);
app.use("/login", loginRouter);
app.use("/user", userRouter);
app.use("/users", usersRouter);

app.listen(port, () => {
    console.log(`Server started on port ${port}`);
});
