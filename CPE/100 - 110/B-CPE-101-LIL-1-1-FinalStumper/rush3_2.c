/*
** EPITECH PROJECT, 2022
** Final Stumper
** File description:
** Final Stumper/rush3_2.c
*/

#include "include/mini_printf.h"

void rush3_2(char *buff)
{
    int x = 0;
    int y = 0;

    for (int i = 0; buff[i] != '\n'; ++i)
        ++x;
    for (int i = 0; buff[i]; ++i) {
        if (buff[i] != '/' && buff[i] != '*' && buff[i] != '\\'
            && buff[i] != ' ' && buff[i] != '\n') {
            my_putstr("none\n");
            return;
        }
        if (buff[i] == '\n')
            ++y;
        if (buff[i - 1] == '/' && y == 1){
            my_putstr("none\n");
            return;
        }
    }
    mini_printf("[rush1-2] %d %d\n", x, y);
}
