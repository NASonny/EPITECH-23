/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** shell_run.c
*/

#include "my_shell.h"

int  shell_run(cmd_list *cur, bool *exit, char *pwd)
{
    int a = 0;
    oprtor_t *oprtor;
    str_list *path = env;
    char **env_arr = str_list_to_arr(env);
    char **path_arr = NULL;

    GET_STR_LIST(path, "PATH=", 5);
    path_arr = path ? str_to_arr(my_grep_str('=', path->str), ":") : NULL;
    if (is_builtin(cur->arr[0]))
        a = my_builtin(cur, exit, pwd);
    else
        a = my_execve(cur, path_arr, env_arr, exit);
    operator_and_or(&oprtor);
    arr_free(env_arr);
    arr_free(path_arr);
    return (a);
}

void cmd_parser(cmd_list *cur)
{
    if (cur->out) {
        printf("out: %s\n", cur->out);
        open_out(cur);
    }
    if (cur->in) {
        printf("in: %s\n", cur->in);
        open_in(cur);
    }
}

void pipe_cmd_list_free(cmd_list *cur)
{
    cmd_list *next = NULL;

    while (cur != NULL) {
        next = cur->pipe;
        if (cur->arr != NULL)
            arr_free(cur->arr);
        if (cur->input != NULL)
            str_list_free(&cur->input);
        if (cur->in != NULL)
            free(cur->in);
        if (cur->out != NULL)
            free(cur->out);
        free(cur);
        cur = next;
    }
}

void cmd_list_free(void)
{
    cmd_list *cur = cmd;
    cmd_list *next = NULL;

    while (cur != NULL) {
        next = cur->next;
        if (cur->pipe)
            pipe_cmd_list_free(cur->pipe);
        if (cur->arr != NULL)
            arr_free(cur->arr);
        if (cur->input != NULL)
            str_list_free(&cur->input);
        if (cur->in != NULL)
            free(cur->in);
        if (cur->out != NULL)
            free(cur->out);
        free(cur);
        cur = next;
    }
    cmd = NULL;
}
