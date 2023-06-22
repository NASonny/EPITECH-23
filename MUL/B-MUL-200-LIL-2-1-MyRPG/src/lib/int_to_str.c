/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** int_to_str.c
*/

#include <stdlib.h>

char *int_to_str(int num)
{
    int i = 0;
    int j = 0;
    int k = 0;

    char *str = malloc(sizeof(char) * 1000);
    if (num < 0) {
        return (NULL);
    }
    if (num == 0) {
        str[i] = '0';
        str[i + 1] = '\0';
        return str;
    }
    for (j = num; j > 0; j = j / 10, i++);
    str[i] = '\0';
    for (j = num; j > 0; j = j / 10, i--) {
        k = j % 10;
        str[i - 1] = k + 48;
    }
    return (str);
}
