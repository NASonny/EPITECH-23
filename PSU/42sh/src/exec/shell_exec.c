/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** shell_exec.c
*/

#include "my_shell.h"

void my_execve_path(cmd_list *cur, char **path, char **env_arr)
{
    char *str = NULL;
    int cmd_len = my_strlen(cur->arr[0]);

    for (int i = 0; path[i]; i++) {
        if (m_check(str = malloc(sizeof(char) *
            (my_strlen(path[i]) + cmd_len) + 2)))
            exit(FAILURE);
        str[0] = '\0';
        my_strcat(my_strcat(my_strcat(str, path[i]), "/"), cur->arr[0]);
        execve(str, cur->arr, env_arr);
        free(str);
    }
}

void permission_or_nf(char *cmd)
{
    if (access(cmd, F_OK) == 0)
        my_dprintf(2, "%s: Permission denied.\n", cmd);
    else
        my_dprintf(2, "%s: Command not found.\n", cmd);
}

int my_execve(cmd_list *cur, char **path, char **env_arr, bool *ex)
{
    pid_t parent;
    int status = 0;
    cmd_parser(cur);
    if ((parent = fork()) == -1) {
        *ex = true;
        return (my_ferror("./42sh: fork error."));
    } else if (!parent) {
        execve(cur->arr[0], cur->arr, env_arr);
        my_execve_path(cur, path, env_arr);
        permission_or_nf(cur->arr[0]);
        cmd_list_free();
        str_list_free(&env);
        arr_free(env_arr);
        arr_free(path);
        exit(1);
    } else {
        if (cur->pipe == NULL && wait(&status) == -1)
            exit(my_ferror("./42sh: wait error."));
    }
    return (shell_exit(status, ex, cur));
}

int shell_error(int status)
{
    if (WTERMSIG(status) == SIGSEGV) {
        if (WCOREDUMP(status))
            my_dprintf(2, "Segmentation fault (core dumped)\n");
        else
            my_dprintf(2, "Segmentation fault\n");
        return (139);
    }
    if (WTERMSIG(status) == SIGFPE) {
        if (WCOREDUMP(status))
            my_dprintf(2, "Floating exception (core dumped)\n");
        else
            my_dprintf(2, "Floating exception\n");
        return (136);
    }
    return (1);
}

int shell_exit(int status, bool *ex, cmd_list *cur)
{
    if (cur->in)
        close_in(cur);
    if (cur->out)
        close_out(cur);
    if (WIFEXITED(status))
        return (WEXITSTATUS(status));
    if (WIFSIGNALED(status))
        return (shell_error(status));
    if (WEXITSTATUS(status) == FAILURE) {
        *ex = true;
        return (84);
    }
    return (0);
}
