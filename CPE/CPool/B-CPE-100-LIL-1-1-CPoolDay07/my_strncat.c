/*
** EPITECH PROJECT, 2022
** strn cat
** File description:
** nothing
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * my_strncat(char * dest, char const * src, int nb)
{
    char * tek1 = dest + strlen(dest);

    while (* src != '\0' && nb--) {
        * tek1++ = * src++;
    }
    * tek1 = '\0';
    return dest;
}
