/*
** EPITECH PROJECT, 2023
** my_dprintf
** File description:
** printf with fd
*/

#include <stdarg.h>
#include <unistd.h>

void my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

void my_putnbr(int n)
{
    if (n < 0) {
        my_putstr("-");
        n = -n;
    }
    if (n > 9) {
        my_putnbr(n / 10);
    }
    char c = '0' + (n % 10);
    write(1, &c, 1);
}

void my_putfloat(double f)
{
    int n = 0;
    int i = (int)f;
    double deci = f - i;

    my_putnbr(i);
    my_putstr(".");
    if (deci < 0)
        deci = -deci;
    for (int j = 0; j < 2; j++) {
        deci *= 10;
        n = (int)deci;
        my_putnbr(n);
        deci -= n;
    }
}

void switch_case_part(int i, const char *format, va_list args)
{
    switch (format[i]) {
        case 'd':
            my_putnbr(va_arg(args, int));
            break;
        case 's':
            my_putstr(va_arg(args, char *));
            break;
        case 'f':
            my_putfloat(va_arg(args, double));
            break;
    }
}

int my_dprintf(int fd, const char *format, ...)
{
    va_list args;
    int ret = 0;
    int i = 0;

    va_start(args, format);
    while (format[i] != '\0') {
        if (format[i] == '%') {
            i++;
            switch_case_part(i, format, args);
        } else
            write(fd, &format[i], 1);
        i++;
    }
    va_end(args);

    return ret;
}
