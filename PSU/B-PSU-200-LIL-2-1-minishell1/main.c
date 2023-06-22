/*
** EPITECH PROJECT, 2023
** Coding Minus Shell from tcsh
** File description:
** main minishell1
*/

#include "include/func_includes.h"


char *path_finder(char **env)
{
    env = __environ;
    char *path = NULL;
    while (*env != NULL) {
        if ((*env)[0] == 'P' && (*env)[1] == 'A' && (*env)[2] == 'T' &&
        (*env)[3] == 'H' && (*env)[4] == '=') {
            path = *env + 5;
            break;
        }
        env++;
    }
    return path;
}

void ls_function (char * path)
{
    DIR *dir = opendir(path);
    struct dirent *dirent = NULL;
    if (dir == NULL) {
        my_putstr("ls: cannot access '");
        my_putstr(path);
        my_putstr("': No such file or directory\n");
        return;
    }
    while ((dirent = readdir(dir)) != NULL){
        if (dirent->d_name[0] != '.'){
            my_putstr(dirent->d_name);
            my_putchar(' ');
        }
    }
    my_putchar('\n');
    closedir(dir);
}

void function_minishell (char **env, char *input)
{
    if (my_strcmp(input, "env") == 0) {
            env = __environ;
            while (*env != NULL){
                my_putstr(*env);
                my_putchar('\n');
                env++;
            }
        } else if (my_strcmp(input, "ls") == 0) {
            ls_function(".");
        }
    if (my_strncmp(input, "cd ", 3) == 0) {
            chdir(input + 3);
    }
}

int main(char **env, char **argv)
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
        }
        input[read_len - 1] = '\0';
        function_minishell(env, input);
    }

    free(input);
    return 0;
}
