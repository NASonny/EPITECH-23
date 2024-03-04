/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** my_str_to_word_array.c
*/

#include "my_rpg.h"

int my_strlen_delim(char const *str, char delim)
{
    int i = 0;
    for (; str[i] != delim || str[i]; i++);
    return i;
}

char **my_strtoword_array_line(char const *str, char delim_char)
{
    int size = my_strlen_delim(str, '\0');
    char **array = malloc(sizeof(char*) * (size + 1));
    int i = 0;
    int j = 0;
    int k = 0;
    array[j] = malloc(sizeof(char) * (size + 1));
    for (; str[i] != '\n' && str[i]; i++, k++) {
        array[j][k] = str[i];
        array[j][k + 1] = '\0';
        if (str[i] == delim_char) {
            array[j][k] = '\0';
            j++;
            array[j] = malloc(sizeof(char) * (size + 1));
            k = -1;
        }
    }
    j++;
    array[j] = NULL;
    return array;
}

char **my_strtoword_array(char const *str, char delim_char)
{
    int size = my_strlen_delim(str, '\0');
    char **array = malloc(sizeof(char*) * (size + 1));
    int i = 0;
    int j = 0;
    int k = 0;
    array[j] = malloc(sizeof(char) * (size + 1));
    for (; str[i] != '\0'; i++, k++) {
        array[j][k] = str[i];
        array[j][k + 1] = '\0';
        if (str[i] == delim_char) {
            array[j][k] = '\0';
            j++;
            array[j] = malloc(sizeof(char) * (size + 1));
            k = -1;
        }
    }
    j++;
    array[j] = NULL;
    return array;
}
