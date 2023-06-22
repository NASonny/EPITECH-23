/*
** EPITECH PROJECT, 2022
** Piscine C day04 task 2
** File description:
** Putstr.
*/
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str)
{
    int c = 0;

    while (str[c] != '\0'){
        my_putchar(str[c]);
        c++;
    }
    return 0;
}
