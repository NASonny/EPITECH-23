/*
** EPITECH PROJECT, 2023
** - - -- - - - --- - ---
** File description:
** SOLO STUMPER 7
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *lowercase(char *str)
{
    int i = 0;
    char lower;
    lower = 65;
    for (lower = str[i]; lower <= 90; i++){
        if (lower >= 65 && lower <= 90)
            lower -= 32;
        }
    return (str);
}

char * hyphens_separator (char * str)
{
    int i = 0;
    for (; str[i] != '\0'; i++){
        if (str[i] == ' ')
            str[i] = '-';
        if (str[i] == '?')
            str[i] -= ' ';
        if (str[i] == '.')
            str[i] = ' ';
    }
    return str;
}

int main (int argc, char **argv)
{
    char *str = argv[1];
    if (argc == 2){
        hyphens_separator(str);
        my_putstr(str);
        my_putstr("\n");
        return 0;
    }
    if (argc < 2 || argc > 2)
        return 84;
}
