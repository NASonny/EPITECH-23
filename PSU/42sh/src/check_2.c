/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** check_2.c
*/

#include "my_shell.h"

int is_builtin(char *str)
{
    if (!my_strcmp(str, "setenv"))
        return (1);
    if (!my_strcmp(str, "unsetenv"))
        return (1);
    if (!my_strcmp(str, "env"))
        return (1);
    if (!my_strcmp(str, "cd"))
        return (1);
    if (!my_strcmp(str, "history"))
        return (1);
    if (!my_strcmp(str, "exit"))
        return (1);
    return (0);
}

void print_cd_error(char *cmd, char *path, struct stat st)
{
    if (!file_exist(path)) {
        if (!my_strcmp(cmd, "~"))
            my_dprintf(2, "cd: No home directory.\n");
        else
            my_dprintf(2, "%s: no such file or directory.\n", path);
    } else if (!S_ISDIR(st.st_mode) && access(path, F_OK) == 0) {
        my_dprintf(2, "%s: Not a directory.\n", path);
    } else
        my_dprintf(2, "%s: Permission denied.\n", path);
}
