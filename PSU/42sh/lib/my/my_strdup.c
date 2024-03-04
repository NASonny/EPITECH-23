/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_strdup.c
*/

#include "my.h"

char *my_strdup(const char *str)
{
    int len = my_strlen(str);
    char *ret = NULL;

    if (m_check(ret = malloc(sizeof(char) * (len + 1))))
        return (NULL);
    *ret = '\0';
    my_strcpy(ret, str);
    return (ret);
}
