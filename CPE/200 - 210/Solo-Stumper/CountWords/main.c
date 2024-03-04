/*
** EPITECH PROJECT, 2023
** Count Words
** File description:
** SOLO STUMPER1
*/

#include "include/applications.h"
#include <stddef.h>
#include <stdio.h>

int main (int argc, char **argv, const char *str)
{
    char c = argv[1];
    
    if (argv[1] == NULL){
        my_putchar('\n');
        return 0;
    }
    if (argc > 2)
        return 84;

    while (c != '\0'){
        c++;
        if ( c == '\n'){
            printf("\n");
            c++;
        }
    }
    printf("%d\n", c);
}
