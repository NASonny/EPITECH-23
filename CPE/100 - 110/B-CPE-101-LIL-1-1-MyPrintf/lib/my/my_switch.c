/*
** EPITECH PROJECT, 2022
** Convert Decimal to Octal / Decimal to Decimal / Decimal to Hexa/UNSIGNEDINT
** File description:
** Switch it 🔄 ?
*/
#include <stdio.h>
#include "func_lib.h"

int my_octal(unsigned int nb)
{
    int p = 1;
    int rest = 0;

    while (nb > 0) {
        rest += nb % 8 * p;
        nb /= 8;
        p *= 10;
    }
    my_put_nbr(rest);
    return 0;
}

int my_decimal(unsigned int nb)
{
    int p = 1;
    int rest = 0;

    while (nb > 0) {
        rest += nb % 10 * p;
        nb /= 10;
        p *= 10;
    }
    my_put_nbr(rest);
    return 0;
}

int my_hexdecimal(unsigned int nb)
{
    int p = 1;
    int rest = 0;

    while (nb > 15) {
        rest += nb % 16 * p;
        nb /= 16;
        p *= 16;
    }
    if (rest < 16 && rest > 9) {
        my_put_nbr(nb);
        my_putchar(rest - 10 + 97);
    } else if (rest <= 0){
        my_putchar(nb - 10 + 97);
    } else {
        my_put_nbr(rest);
        my_put_nbr(nb);
    }
    return 0;
}
