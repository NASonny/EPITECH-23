/*
** EPITECH PROJECT, 2022
** StrUp
** File description:
** IDK
*/

#include <stdlib.h>
#include <stdio.h>

int my_strlen(char * str);

char *my_strdup (char *src)
{
    int i = 0;
    int length = my_strlen(src);
    char * str = malloc(sizeof(char) * (length + 1));
    while ( src[i] != '\0'){
        str[i] = src [i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
