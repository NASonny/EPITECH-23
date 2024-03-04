/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_strlen.c
*/

#include "my.h"

int my_strlen(char const *str)
{
    int length = 0;

    if (str == NULL)
        return 0;
    for (; str[length]; length++);
    return (length);
}

int my_strlen_delim(char const *str, char delim)
{
    int i = 0;

    for (; str[i] != delim && str[i] != '\0'; ++i);
    return i;
}
