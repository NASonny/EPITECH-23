/*
** EPITECH PROJECT, 2023
** FOZZBAZZ
** File description:
** SOLO STUMPER3
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>

int my_compute_power_it(int nb, int p);

int fozzbazz(int argc, char **argv)
{
    char c;
    int i = atoi(argv[1]);
    for (c = atoi(argv[1]) ; c <= atoi(argv[2]) ; c++){
            if (i == 2 || i == 4 || i == 6 || i == 8
                || i == 10 || i == 12 || i == 14 || i == 16){
                c++;
                i++;
                printf("Fozz\n");
            }
            if (i == 9 || i == 27 || i == 45){
                c++;
                printf("Bazz\n");
            }
            if ( i == 18 || i == 36 || i == 54){
                c++;
                i++;
                printf("FozzBazz\n");
            }
            printf("%d\n", c);
    }
}

int main (int argc, char **argv)
{
    if (argc > 3)
        return 84;
    if (atoi(argv[1]) > atoi(argv[2]))
        return 84;
    if (argv[1] == NULL || argv[2] == NULL)
        return 84;
    else
        fozzbazz(argc, argv);
}
