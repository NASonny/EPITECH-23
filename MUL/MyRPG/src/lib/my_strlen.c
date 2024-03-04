/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** my_strlen.c
*/

#include "my_rpg.h"

int my_strlen(char const *str)
{
    int i = 0;
    for (; str[i]; i++);
    return i;
}
