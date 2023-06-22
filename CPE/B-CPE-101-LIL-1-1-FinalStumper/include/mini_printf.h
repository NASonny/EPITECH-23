/*
** EPITECH PROJECT, 2022
** Final stumper
** File description:
** Final stumper/mini_printf header file
*/

#include <stdarg.h>

#ifndef MINI_PRINTF_H_
    #define MINI_PRINTF_H_

    int my_putchar(char);
    int my_putstr(char const *);
    int my_strlen(char const *);
    int intlen(int);
    int my_put_nbr(int);

    int mini_printf(char const *format, ...);

#endif /* !MINI_PRINTF_H_ */
