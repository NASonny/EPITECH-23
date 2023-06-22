/*
** EPITECH PROJECT, 2023
** 42sh
** File description:
** logical_and_or
*/

#include "my_shell.h"

void operator_and(oprtor_t *oprtor, int j)
{
    if (oprtor->status == 0) {
        int n = j + 1;
        while (oprtor->args[n] != NULL) {
            oprtor->args[n - j - 1] = oprtor->args[n];
            n++;
        }
        oprtor->args[n - j - 1] = NULL;
        j = -1;
    }
}

void is_operator_and(oprtor_t *oprtor, int j)
{
    oprtor->args[j] = NULL;
    oprtor->pid = fork();
    if (oprtor->pid == 0) {
        execvp(oprtor->args[0], oprtor->args);
        perror(oprtor->args[0]);
        exit(1);
        } else if (oprtor->pid > 0) {
            waitpid(oprtor->pid, &oprtor->status, 0);
            operator_and(oprtor, j);
        }
}

void operator_or(oprtor_t *oprtor, int j)
{
    if (oprtor->status != 0) {
        int n = j + 1;
        while (oprtor->args[n] != NULL) {
            oprtor->args[n - j - 1] = oprtor->args[n];
            n++;
        }
        oprtor->args[n - j - 1] = NULL;
        j = -1;
    }
}

void is_operator_or(oprtor_t *oprtor, int j)
{
    oprtor->args[j] = NULL;
    oprtor->pid = fork();
    if (oprtor->pid == 0) {
        execvp(oprtor->args[0], oprtor->args);
        perror(oprtor->args[0]);
        exit(1);
        } else if (oprtor->pid > 0) {
            waitpid(oprtor->pid, &oprtor->status, 0);
            operator_or(oprtor, j);
        }
}

int operator_and_or(oprtor_t *oprtor)
{
    oprtor = malloc(sizeof(oprtor_t));
    int j = 0;
    while (oprtor->args[j] != NULL) {
        char *arg = oprtor->args[j];
        if (strcmp(arg, "&&") == 0)
            is_operator_and(oprtor, j);
        if (strcmp(arg, "||") == 0)
            is_operator_or(oprtor, j);
        j++;
    }
    if (oprtor->args[0] != NULL) {
        oprtor->pid = fork();
        if (oprtor->pid == 0) {
            execvp(oprtor->args[0], oprtor->args);
            perror(oprtor->args[0]);
            exit(1);
        }}
    memset(oprtor->args, 0, sizeof(oprtor->args));
    free(oprtor);
    return 0;
}
