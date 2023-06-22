/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** middleware/notFound
*/

function notFoundMiddleware(req, res) {
    res.status(404).json({ msg: 'Not found' });
  }
  export default notFoundMiddleware;
