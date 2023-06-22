/*
** EPITECH PROJECT, 2022
** concat_params
** File description:
** IDK
*/

#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);

void my_putstr(char const *str);

int my_strlen(char const *str);

char *concat_params (int argc, char **argv)

{
    int current_char_index = 0;
    int length = 0;
    char *str;

    for (int i = 0; i < argc; i++)
        length += my_strlen(argv[i]) + 1;

    str = malloc(sizeof(char) * length);
    for (int arg_index = 0; arg_index < argc; arg_index++){

        for (int i = 0; i < my_strlen(argv[arg_index]); i++) {
            str[current_char_index] = argv[arg_index][i];
            current_char_index++;
        }
        str[current_char_index] = '\n';
        current_char_index++;
    }
    str[length - 1] = '\0';
    return (str);
}
