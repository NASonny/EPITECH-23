/*
** EPITECH PROJECT, 2022
** str lowcase
** File description:
** nothing there
*/

#include <stdio.h>

char *my_strlowcase(char *str)
{
    int lowercase;

    for (lowercase = 0; str[lowercase]; lowercase++)
        if (str[lowercase] >= 'A' && str[lowercase] <= 'Z')
            str[lowercase] += 32;
}
