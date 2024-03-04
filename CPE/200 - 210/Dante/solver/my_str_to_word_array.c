/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** my_str_to_word_array
*/

#include "include/func_includes.h"
#include "include/struct.h"

int size_word(char const *buffer)
{
    int i = 0;
    for (; buffer[i] != '\n' && buffer[i] != '\0'; i++);
    return i;
}

int count_word(char const *buffer)
{
    int space = 1;
    for (int i = 0; buffer[i] != '\0'; i++){
        if (buffer[i] == '\n')
            space++;
    }
    return space;
}

char **my_str_to_word_array (char const * str)
{
    int len = count_word(str);
    char **map = malloc(sizeof(char *) * (len + 1));
    int size = 0;
    int i = 0;
    int k = 0;

    for (; str[k] != '\0';) {
        size = size_word(&str[k]);
        map[i] = malloc(sizeof(char) * (size + 1));
        for (int j = 0; str[k] != '\0' && str[k] != '\n'; k++, j++) {
            map[i][j] = str[k];
            map[i][j + 1] = '\0';
        }
        if (str[k] == '\n')
            k++;
        i++;
    }
    map[i] = NULL;
    return (map);
}
