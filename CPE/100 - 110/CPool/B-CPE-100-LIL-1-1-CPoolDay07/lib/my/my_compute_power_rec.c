/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** Nothing there just a file description or not.
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (nb == 0)
        return 0;
    if (p == 0)
        return 1;
    if (nb == 1)
        return nb;
    else
        return nb * my_compute_power_rec(nb, p - 1);
}
