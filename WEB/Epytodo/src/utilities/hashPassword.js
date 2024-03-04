/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/hashPassword
*/

import bcrypt from "bcryptjs";

export default function hashPassword(req)
{
    if (/\s/g.test(req.body.password) || req.body.password === undefined || req.body.password === null)
        return null;
    return bcrypt.hashSync(req.body.password, bcrypt.genSaltSync(10));
}
