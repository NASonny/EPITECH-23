/*
** EPITECH PROJECT, 2022
** Piscine C Day 04 my_strlen.c
** File description:
** count
*/

void my_putchar(char c);

int my_strlen(char const *str)
{
    int c = 0;

    while (str[c] != '\0')
        c++;
    return (c);
}
