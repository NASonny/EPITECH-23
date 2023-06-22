/*
** EPITECH PROJECT, 2023
** Geek Name Formatter
** File description:
** SOLO STUMPER4
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>


char *uppercase(char *str)
{
    int upper = 0;
    while (str[upper] != '\0'){
        if (str[upper] == 83){
        str[upper] = 115;
        }
        upper++;
    }
    return (str);
}

char *replace(char *str)
{
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == 'o' || str[i] == 'O')
            str[i] = 'O';
        if (str[i] == 'a' || str[i] == 'A')
            str[i] = '4';
        if (str[i] == 'i' || str[i] == 'I')
            str[i] = '1';
        if (str[i] == 'u' || str[i] == 'U')
            str[i] = '2';
        if (str[i] == 'e' || str[i] == 'E')
            str[i] = '3';
        if (str[i] == 'y' || str[i] == 'Y')
            str[i] = '5';
        i++;}
    return (str);
}

int main (int argc, char **argv)
{
    if (argc >= 3)
        return 84;
    char *str = argv[1];
    uppercase(str);
    replace(str);
    my_putstr(str);
    my_putstr("\n");
    return 0;
}
