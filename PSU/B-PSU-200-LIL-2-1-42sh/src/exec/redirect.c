/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** redirect.c
*/

#include "my_shell.h"

void open_double(cmd_list *cur)
{
    int fd = open(".tmp.txt", O_WRONLY | O_CREAT | O_TRUNC,
        S_IRUSR | S_IWUSR);
    char *tmp = NULL;
    size_t len;
    cur->old_in = dup(0);

    my_printf("? ");
    while (getline(&tmp, &len, stdin) != EOF) {
        if (!my_strncmp(cur->in, tmp, my_strlen(cur->in)))
            break;
        my_dprintf(fd, "%s", tmp);
        free(tmp);
        tmp = NULL;
        my_printf("? ");
    }
    free(tmp);
    close(fd);
    fd = open(".tmp.txt", O_RDONLY);
    dup2(fd, 0);
    close(fd);
}

void open_in(cmd_list *cur)
{
    int fd;

    if (!cur->in_type) {
        open_double(cur);
        return;
    }
    fd = open(cur->in, O_RDONLY);
    cur->old_in = dup(0);
    if (fd == -1 && file_exist(cur->out)) {
        my_dprintf(2, "%s: Permission denied.\n", cur->out);
        return;
    } else if (fd == -1) {
        my_dprintf(2, "%s: Is a directory.\n", cur->out);
        return;
    }
    dup2(fd, 0);
    close(fd);
}

void open_out(cmd_list *cur)
{
    int fd;

    fd = cur->out_type
        ? open(cur->out, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR)
        : open(cur->out, O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
    cur->old_out = dup(1);
    if (fd == -1 && file_exist(cur->out)) {
        my_dprintf(2, "%s: Permission denied.\n", cur->out);
        return;
    } else if (fd == -1) {
        my_dprintf(2, "%s: Is a directory.\n", cur->out);
        return;
    }
    dup2(fd, 1);
    close(fd);
}

void close_out(cmd_list *cur)
{
    dup2(cur->old_out, 1);
}

void close_in(cmd_list *cur)
{
    dup2(cur->old_in, 0);
}
