/*
** EPITECH PROJECT, 2022
** print
** File description:
** print
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include "my.h"

int my_putchar_arg(va_list ap, struct mod modif)
{
    char c = va_arg(ap, int);
    write(1, &c, 1);
    return 1;
}

int my_put_pourcent(va_list ap, struct mod modif)
{
    char a = '%';
    write(1, &a, 1);
    return 1;
}

int my_putstr_arg(va_list ap, struct mod modif)
{
    char *str = va_arg(ap, char*);
    for (int i = 0; str[i]; i++){
        my_putchar(str[i]);
    }
    return my_strlen(str);
}

int my_put_string_octal(va_list ap, struct mod modif)
{
    char *str = va_arg(ap, char*);
    int n = 0;
    for (int i = 0; str[i]; i++){
        if (str[i] < 8 && str[i] != '\n')
            n += my_printf("%c00%o",92, str[i]);
        if (str[i] > 7 && str[i] < 32 && str[i] != '\n')
            n += my_printf("%c0%o",92, str[i]);
        n += my_printf("%c", str[i]);
    }
    return n;
}
