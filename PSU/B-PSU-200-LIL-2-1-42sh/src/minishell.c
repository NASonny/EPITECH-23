/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** minishell.c
*/

#include "my_shell.h"

str_list *env;

int minishell(char **env_arr)
{
    env = init_env(env_arr);
    cmd = NULL;
    char *pwd = set_pwd();
    return (shell(isatty(STDIN_FILENO), pwd));
}

void signal_ctrl_c(int sig)
{
    (void) sig;
    my_printf("\n");
    my_prompt();
}

void signal_ctrl_z(int sig)
{
    (void) sig;
}
