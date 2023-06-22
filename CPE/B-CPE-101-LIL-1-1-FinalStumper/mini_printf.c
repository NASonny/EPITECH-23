/*
** EPITECH PROJECT, 2022
** MINI_PRINTF
** File description:
** Simple version of printf
*/

#include <stdarg.h>
#include "include/mini_printf.h"

int mini_printf(const char *format, ...)
{
    int len = 0;
    va_list ap;

    va_start(ap, format);
    for (int i = 0; i < my_strlen(format); ++i) {
        if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
            len += my_put_nbr(va_arg(ap, int));
        if (format[i] == '%' && format[i + 1] == 's')
            len += my_putstr(va_arg(ap, char *));
        if (format[i] == '%' && format[i + 1] == 'c')
            len += my_putchar(va_arg(ap, int));
        if ((format[i] == '%' && format[i + 1] == '%') || format[i] != '%')
            len += my_putchar(format[i]);
        if (format[i] == '\n')
            --len;
        if (format[i] == '%')
            ++i;
    }
    va_end(ap);
    return (len);
}
