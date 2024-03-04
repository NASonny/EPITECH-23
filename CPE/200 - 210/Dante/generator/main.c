/*
** EPITECH PROJECT, 2023
** dante
** File description:
** CPE
*/

#include "include/func_includes.h"

int main(int argc, char **argv)
{
    int i;
    int j;
    int rows = atoi(argv[1]);
    int columns = atoi(argv[2]);

    for (i = 1; i <= rows; i++){
        for (j = 1; j <= columns; j++){
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
