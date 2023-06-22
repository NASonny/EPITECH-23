/*
** EPITECH PROJECT, 2022
** put str
** File description:
** Nothing there
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(const char *str)
{
    int rx = 0;
    while (str[rx]) {
        my_putchar(str[rx]);
        rx++;
    }
}
