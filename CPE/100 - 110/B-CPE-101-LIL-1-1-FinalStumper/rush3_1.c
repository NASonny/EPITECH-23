/*
** EPITECH PROJECT, 2022
** Final stumper
** File description:
** Final stumper/rush3_1.c
*/

#include "include/mini_printf.h"

int check_char(char *buff, int i)
{
    if ((buff[i] != 'o' && buff[i] != '-' && buff[i] != '|'
        && buff[i] != ' ' && buff[i] != '\n')
        || (buff[i] == 'o' && buff[i + 1] != '\n' && buff[i - 1] != '\n'
            && i != 0)
        || (buff[i] == 'o' && (buff[i - 1] == ' ' || buff[i + 1] == ' '))) {
        my_putstr("none\n");
        return (84);
    }
    return (0);
}

void rush3_1(char *buff)
{
    int x = 0;
    int y = 0;

    for (int i = 0; buff[i] != '\n'; ++i) {
        if (buff[i] != 'o' && buff[i] != '-') {
            my_putstr("none\n");
            return;
        }
        ++x;
    }
    for (int i = 0; buff[i]; ++i) {
        if (check_char(buff, i) == 84)
            return;
        if (buff[i] == '\n')
            ++y;
    }
    if (buff[x * y + y - 2] != 'o')
        my_putstr("none\n");
    else
        mini_printf("[rush1-1] %d %d\n", x, y);
}
