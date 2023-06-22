/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_putchar.c
*/

#include <unistd.h>

int my_putchar(int fd, int c)
{
    return (write(fd, &c, 1));
}
