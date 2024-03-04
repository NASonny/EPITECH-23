/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** remake of my_ls linux
*/

#include <sys/types.h>
#include <dirent.h>
#include "include/lib.h"
#include "include/functions_lib.h"
#include <stdarg.h>
#include <stdio.h>

void dispatch_args(char flag)
{
    char flags[] = {'a', 'r', 'l', 'R', 'd', 't', '\0'};
    int (*tab[]) (char *) = {flag_a, flag_r, flag_l,
    flag_rupper, flag_d, flag_t};

    for (int i = 0; flags[i] != '\0'; i++) {
        if (flag == flags[i]) {
            (*tab[i])(NULL);
            return;
        }
    }
}

void my_ls (int argc, char **argv)
{

    if (argc == 1){
        my_ls_no_arg();
    }
    if (argc == 2) {
        if (argv[1][0] == '-')
            dispatch_args(argv);
        else
            ls_arg(argv[1]);
    }
}

int main (int argc, char **argv)
{
    my_ls(argc, argv);
    return 0;
}
