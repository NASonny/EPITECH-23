/*
** EPITECH PROJECT, 2023
** EPyTodo
** File description:
** utilities/get_date
*/

export default function getDate(date)
{
    const newDate = new Date(date);
    const month = (newDate.getMonth() + 1).toString();
    const day = newDate.getDate().toString();
    const hours = newDate.getHours().toString();
    const minutes = newDate.getMinutes().toString();
    const seconds = newDate.getSeconds().toString();

    return `${date.getFullYear()}-${month.length === 1 ? `0${month}` : month}-${day.length === 1 ? `0${day}` : day} ${hours.length === 1 ? `0${hours}` : hours}:${minutes.length === 1 ? `0${minutes}` : minutes}:${seconds.length === 1 ? `0${seconds}` : seconds}`;
}
