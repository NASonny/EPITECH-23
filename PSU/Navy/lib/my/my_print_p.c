/*
** EPITECH PROJECT, 2022
** printf pointer
** File description:
** others files of project printf
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include "my.h"

int my_put_base(unsigned long long n, char const *base);

int my_put_pointer(va_list ap, struct mod modif)
{
    void *n = va_arg(ap, void *);
    my_putstr("0x");
    my_put_base(n, "0123456789abcdef");
    return 0;
}
