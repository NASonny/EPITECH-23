/*
** EPITECH PROJECT, 2022
** my_compute_power_it.c
** File description:
** Nothing there just a file description or not.
*/

#include <stdio.h>

int my_compute_power_it(int nb, int p)
{
    int multiple = nb;
    if (nb == 0)
        return 0;
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;

    for (int i = 0; i < p - 1; i++){
        nb = nb * multiple;
    }
    return nb;
}
