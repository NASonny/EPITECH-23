/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-42sh-mathis.zucchero
** File description:
** print_history.c
*/

#include "my_shell.h"

int help_history(char *pwd)
{
    pid_t pid = 0;
    char *help = ".help_history";
    char *tmp_pwd = malloc(sizeof(char) * (my_strlen(pwd) + 1));
    my_strcpy(tmp_pwd, pwd);
    for (int i = 0; i < 13; i++)
        tmp_pwd[my_strlen(tmp_pwd) - 13 + i] = help[i];
    char *cat[] = {"/bin/cat", tmp_pwd, NULL};
    if ((pid = fork()) == 0) {
        if (execve(cat[0], cat, NULL) == -1) {
            my_printf("%s: Help file not found\n", tmp_pwd);
        }
    }
    waitpid(pid, NULL, 0);
    return 0;
}

int clear_history(char *pwd)
{
    int file = open(pwd, O_WRONLY | O_TRUNC);
    if (file == -1)
        return 84;
    close(file);
    return 0;
}

int print_history(char *pwd)
{
    pid_t pid = 0;
    char *cat[] = {"/bin/cat", pwd, NULL};
    if ((pid = fork()) == 0) {
        if (execve(cat[0], cat, NULL) == -1) {
            my_printf("%s: History file not found\n", pwd);
        }
    }
    waitpid(pid, NULL, 0);
    return 0;
}
