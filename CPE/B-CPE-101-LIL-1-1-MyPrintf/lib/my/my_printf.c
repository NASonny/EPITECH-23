/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-mathis.zucchero
** File description:
** my_printf.c
*/

#include <lib.h>
#include "func_lib.h"
#include <stdarg.h>
#include <stdio.h>

void my_put_percent(void)
{
    my_putchar('%');
    return;
}

void check_conv(char c, va_list *ap)
{
    int rep = 9;

    for (int i = 0; convers[i].conv != '\0'; ++i) {
        if (c == convers[i].conv) {
            convers[i].printf_funct(ap);
        }
    }
    return;
}

int my_printf(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (; *s; ++s) {
        if (*s == '%') {
            ++s;
            check_conv(*s, &ap);
        } else {
            my_putchar(*s);
        }
    }
    va_end(ap);
    return (0);
}
