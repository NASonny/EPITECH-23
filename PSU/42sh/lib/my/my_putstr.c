/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_putstr.c
*/

#include "myprintf.h"

int my_putstr(int fd, char const *str)
{
    int i = my_strlen(str);

    write(fd, str, i);
    return (i);
}

int my_putnstr(int fd, char const *str, int nb)
{
    int i = 0;

    for (; str[i] && i < nb;)
        i += my_putchar(fd, str[i]);
    return (i);
}
