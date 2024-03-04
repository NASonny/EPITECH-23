/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** my_precision_funct.c
*/

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "func_lib.h"

int point_prec(char c)
{
    int rep = 0;

    for (; c > '0' && c < '9'; ++c) {
        my_putchar(c);
    }
    return (rep);
}
