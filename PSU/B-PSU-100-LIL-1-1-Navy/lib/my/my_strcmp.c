/*
** EPITECH PROJECT, 2023
** lib
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char* a, char* b)
{
    if (my_strlen(a) != my_strlen(b))
        return (84);
    for (int i = 0; i <= (int)my_strlen(a);) {
        if ((int)a[i] == (int)b[i])
            i++;
        else
            return (84);
    }
    return (0);
}
