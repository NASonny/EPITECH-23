/*
** EPITECH PROJECT, 2022
** Final stumper
** File description:
** Final stumper/rush3.c
*/

#include "include/rush3.h"
#include "include/mini_printf.h"

int is_rectangle(char *buff)
{
    int x = 0;
    int tmp = 0;

    for (int i = 0; buff[i] != '\n'; ++i)
        ++x;
    for (int i = 0; buff[i]; ++i) {
        if (buff[i] != '\n')
            ++tmp;
        if (tmp != x && buff[i] == '\n')
            return (84);
        if (buff[i] == '\n')
            tmp = 0;
    }
    return (0);
}

int rush3(char *buff)
{
    if (is_rectangle(buff) == 84) {
        my_putstr("none\n");
        return (84);
    }
    if (buff[0] == 'o') {
        rush3_1(buff);
        return (0);
    }
    if (buff[0] == '/' || buff[0] == '*') {
        rush3_2(buff);
        return (0);
    }
    if (buff[0] == 'B' && buff[1] == '\n') {
        my_putstr("[rush1-3] 1 1 || [rush1-4] 1 1 || [rush1-5] 1 1\n");
        return (0);
    }
    my_putstr("none\n");
    return (0);
}
