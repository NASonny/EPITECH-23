/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** definition of all the convertion function
*/


#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "func_lib.h"

static int this_is_a_float(int decimal, float after_comma, int precision)
{
    for (int i = 0; i < precision; i++) {
        decimal = after_comma * 10;
        my_put_nbr(decimal);
        after_comma = after_comma * 10 - decimal;
    }
    return 0;
}

static float my_put_float(float my_float)
{
    int temp = my_float;
    float after_comma = (my_float - temp);
    int decimal = 0;
    int precision = 6;

    if (precision == '0') {
        my_put_nbr(temp);
    } else if (precision == '\0'){
        my_put_nbr(temp);
        my_putchar('.');
        this_is_a_float(decimal, after_comma, precision);
    } else {
        my_put_nbr(temp);
        my_putchar('.');
        this_is_a_float(decimal, after_comma, precision);
    }
    return (temp);
}

void my_putstr_arg(va_list *ap)
{
    char *temp = va_arg(*ap, char*);
    int rep = my_strlen(temp);

    if (rep == '\0')
        rep = my_strlen(temp);
    write(1, temp, rep);

    return;
}

void my_putchar_arg(va_list *ap)
{
    int rep = 1;
    char c = va_arg(*ap, int);
    write(1, &c, rep);
    return;
}

void my_putfloat_arg(va_list *ap)
{
    int rep = 0;
    float my_float = va_arg(*ap, double);

    my_put_float(my_float);
    return;
}
