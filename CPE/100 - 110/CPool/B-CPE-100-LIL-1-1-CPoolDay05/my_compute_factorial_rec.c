/*
** EPITECH PROJECT, 2022
** MY_COMPUTE_FACTORIAL_REC.c
** File description:
** Nothing there just a description.
*/

#include <stdio.h>

int my_compute_factorial_rec(int nb)
{
    int resultat;
    if (nb < 0 || 12 < nb)
        return (0);
    else if (nb == 0)
        return (1);

    resultat = nb * my_compute_factorial_rec(nb - 1);
    return (resultat);
}
