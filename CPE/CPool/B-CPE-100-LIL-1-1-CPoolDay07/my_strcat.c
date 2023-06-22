/*
** EPITECH PROJECT, 2022
** my_strcat.C
** File description:
** Write a function that concatenates two strings.
*/
#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest, char const *src)
{
    char dest[15], src[100];
    strcpy(dest, "Hello\0");
    strcpy(src, "World !\0");
    my_strcat(dest, src);
    return dest;
}
