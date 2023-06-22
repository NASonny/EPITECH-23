/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** str_to_arr.c
*/

#include "my.h"

int arr_len(char **arr)
{
    int len;

    for (len = 0; arr[len] != NULL; len++);
    return (len);
}

void arr_free(char **arr)
{
    for (int i = 0; arr[i];)
        free(arr[i++]);
    free(arr);
}

int str_count_words(const char *str, const char *separator)
{
    int x = 0;

    for (int i = 0; str[i] != 0; x++) {
        for (; str[i] && my_grep(separator, str[i]); i++);
        for (; str[i] && !my_grep(separator, str[i]); i++);
    }
    return (x);
}

char **str_to_arr(const char *str, const char *separator)
{
    int b = 0;
    int a = 0;
    int nb = str_count_words(str, separator);
    char **av = malloc(sizeof(char *) * (nb + 1));

    for (int i = 0; str[i];) {
        for (; str[i] && my_grep(separator, str[i]); i++);
        for (b = 0; str[i] && !my_grep(separator, str[i]); i++, b++);
        if (b) {
            av[a] = malloc(sizeof(char) * (b + 1));
            av[a][0] = 0;
            my_strncat(av[a], &str[i - b], b);
            a++;
        }
    }
    av[a] = 0;
    return (av);
}
