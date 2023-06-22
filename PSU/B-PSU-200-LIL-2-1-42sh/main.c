/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** main.c
*/

#include "my_shell.h"

cmd_list *cmd;

int main(int ac, char **av, char **env)
{
    (void) ac;
    (void) av;
    return (minishell(env));
}
