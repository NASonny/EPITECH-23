/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_revstr.c
*/

#include "my.h"

char *my_revstr(char *str)
{
    char c;
    int x = 0;
    int n = my_strlen(str);

    while (2 * x < n) {
        c = *(str + x);
        *(str + x) = *(str + n - x - 1);
        *(str + n - x++ - 1) = c;
    }
    return (str);
}
