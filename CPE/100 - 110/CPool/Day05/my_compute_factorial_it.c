/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_FACTORIAL_IT.c
** File description:
** Nothing there just a description.
*/

#include <stdio.h>

int my_putchar(char c);

int my_compute_factorial_it(int nb)
{
    if (nb < 0 || 12 < nb)
        return (0);
    else if (nb == 0)
        return (1);
    else
        return (my_compute_factorial_it(nb - 1) * nb);
}
