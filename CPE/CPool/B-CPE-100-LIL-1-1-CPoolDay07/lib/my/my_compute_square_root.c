/*
** EPITECH PROJECT, 2022
** my_compute_square_root.c
** File description:
** Nothing there just a file description
*/

#include <stdio.h>

int my_compute_square_root(int nb)
{
    if (nb < 1){
        return 0;
    }
    if (nb % 1){
        return sqrt(nb);
    }else
        return 0;
}
