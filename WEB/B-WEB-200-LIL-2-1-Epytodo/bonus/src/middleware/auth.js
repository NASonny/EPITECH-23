/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** middleware/auth
*/

import jwt from 'jsonwebtoken';

function authMiddleware(req, res, next) {
    const token = req.header('Authorization');

    if (!token)
      return res.status(401).json({ msg: 'No token, authorization denied' });
    try {
      const decoded = jwt.verify(token, process.env.SECRET);
      req.user = decoded;
      if (!isValidParameters(req))
        return res.status(400).json({ msg: 'Bad parameter' });
      next();
    } catch (error) {
      return res.status(401).json({ msg: 'Token is not valid' });
    }
}

function isValidParameters(req) {
    if (req.body.title && req.body.description)
      return true;
    return false;
  }
  export default authMiddleware;
