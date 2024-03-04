/*
** EPITECH PROJECT, 2023
** FazzBizz
** File description:
** SOLO STUMPER 10 | raison de pourquoi j'ai arreté ^^
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void print_error(void)
{
    write(2, "Error: the second parameter must ", 33);
    write(2, "be greater than the first.\n", 27);
}

void fizzbazz(char **argv)
{
    char c;
    int i = atoi(argv[1]);
    for (c = atoi(argv[1]) ; c <= atoi(argv[2]) ; c++){
        if (c % 9 == 0 && c % 10 == 0){
            i++;
            c++;
            printf("%s\n", "FazzBizz");
        }
        if (c % 9 == 0){
            c++;
            i++;
            printf("%s\n", "Bizz");
        }
        if (c % 10 == 0){
            i++;
            c++;
            printf("%s\n", "Fazz");
        }
        printf("%d\n", c);
    }
}

int main (int argc, char **argv)
{
    if (atoi(argv[1]) > atoi(argv[2]) && argc >= 3){
        print_error();
        printf("\n");
        return 84;
    }
    if (argv[1] == NULL || argv[2] == NULL)
        return 84;
    else
        fizzbazz(argv);
}
