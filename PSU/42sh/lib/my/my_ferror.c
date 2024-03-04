/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_ferror.c
*/

#include "my.h"

int my_ferror(const char *error)
{
    my_dprintf(STDERR_FILENO, "%s\n", error);
    return (FAILURE);
}

int m_check(void *m_ret)
{
    return (m_ret == NULL ? my_ferror("Error with malloc") : SUCCESS);
}
