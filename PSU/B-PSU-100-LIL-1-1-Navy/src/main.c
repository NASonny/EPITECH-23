/*
** EPITECH PROJECT, 2022
** BSQ
** File description:
** BSQ
*/

//#include <uuid/uuid.h>
#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <signal.h>
#include "../lib/my/my.h"
#include "../include/my_navy.h"

int process_info (void)
{
    int pid_t = getpid();
    my_printf("my_pid: %d", pid_t);
    my_putchar('\n');
    return 0;
}

int main(int ac, char** av)
{
    if (ac == 2){
        if (av[1][0] == '-' && av[1][1] == 'h') {
            help();
            return (0);
            }
    }

    item m = malloc(sizeof(st_t));

    process_info();
    my_printf("waiting for enemy connection...\n");
    return (0);
}
