/*
** EPITECH PROJECT, 2022
** My_strcpy.c
** File description:
** Nothing there just a file description.
*/

#include <stdio.h>

char *my_strcpy(char *aff, char const *origin)
{
    int o;
    while (origin[o] != '\0') {
        aff[o] = origin[o];
        o++;
    }
    aff[o] = '\0';
    return (aff);
}
