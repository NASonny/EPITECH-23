/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** PSU
*/

/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** PSU
*/

#include "include/func_includes.h"

int path_finder(char **env)
{
    env = __environ;
    char *path = NULL;
    while (*env != NULL) {
        if ((*env)[0] == 'P' && (*env)[1] == 'A' && (*env)[2] == 'T' && (*env)[3] == 'H' && (*env)[4] == '=') {
            path = *env + 5;
            break;
        }
        env++;
    }
    char *path_split = strtok(path, ":");
    while (path_split != NULL) {
        my_putstr(path_split);
        my_putchar('\n');
        path_split = strtok(NULL, ":");
    }
    return 0;
}

void display_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++){
        my_putstr(array[i]);
        my_putchar('\n');
    }
}

int main(char **env)
{
    char *input = NULL;
    size_t input_len = 0;
    ssize_t read_len = 0;

    while (1) {
        my_putstr(PROMPT);

        read_len = getline(&input, &input_len, stdin);
        if (read_len == -1) {
            my_putstr("exit\n");
            return 0;
            exit;
        }
    }

    free(input);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

