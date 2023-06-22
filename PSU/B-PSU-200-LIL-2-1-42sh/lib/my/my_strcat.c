/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_strcat.c
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    for (; src[i]; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';
    return (dest);
}

char *my_strncat(char *dest, char const *src, const int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    for (; src[i] && nb > i; i++, j++)
        dest[j] = src[i];
    dest[j] = '\0';
    return (dest);
}
