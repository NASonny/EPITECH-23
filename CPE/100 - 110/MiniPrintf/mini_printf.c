/*
** EPITECH PROJECT, 2022
** Simply version of my printf
** File description:
** Mini Printf
*/

#include <stdarg.h>

void my_putchar(char c);
void my_putstr(const char *str);
int my_strlen(char const *str);
int my_put_nbr(int nombreux);
char *my_strcpy(char *aff, char const *origin);


int smini_printf(const char *format, int *i, va_list ap, int *size)
{
    if (format[(*i)] == '%'
        && (format[(*i) + 1] == 'd' || format[(*i) + 1] == 'i')){
        my_put_nbr(va_arg(ap, int));
        (*i) += 2;
    }
    if (format[(*i)] == '%' && format[(*i) + 1] == 'c'){
        my_putchar(va_arg(ap, int));
        (*i) += 2;
        *size += *i;
    }
    if (format[(*i)] == '%' && format[(*i) + 1] == 's'){
        my_putstr(va_arg(ap, char *));
        (*i) += 2;
        *size += (*i);
    }
    if (format[(*i)] == '%' && format[(*i) + 1] == '%'){
        my_putchar('%');
        (*i) += 2;
        *size += (*i);
    }
}

int mini_printf(const char *format, ...)
{
    int i = 0;
    int size = 0;
    va_list ap;

    va_start(ap, format);

    while (format[i] != '\0'){
        if (format[i] != '%'){
            my_putchar(format[i]);
            i++;
            size++;
        }
        smini_printf(format, &i, ap, &size);
    }
    va_end(ap);
    return (0);
}
