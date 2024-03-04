/*
** EPITECH PROJECT, 2022
** rush_2.c
** File description:
** What is my Language ?
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

int counting_letter(int argc, char **argv, int nbrarg)
{
    int compteur = 0;
    char *str;

    for (int i = 0; argv[1][i] != '\0'; i++)
        if (argv[1][i] == argv[nbrarg][0])
            compteur++;
    return compteur;
}

int main(int argc, char **argv)
{
    int c = 0;
    my_strlowcase(argv[1]);
    for (int i = 2; argv[i] != NULL; i++){
        my_putchar(argv[i][0]);
        my_putchar(':');
        my_strlowcase(argv[i]);
        c = counting_letter(argc, argv, i);
        my_put_nbr(c);
        my_putchar('\n');
    return 0;
    }
}
