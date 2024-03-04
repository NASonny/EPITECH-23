/*
** EPITECH PROJECT, 2022
** fezf
** File description:
** fzefe
*/


#include <sys/types.h>
#include <dirent.h>
#include "include/lib.h"
#include "include/functions_lib.h"
#include <stdarg.h>
#include <stdio.h>

int ls_arg(char *filepath)
{
    DIR *direct;
    struct dirent *buff;

    direct = opendir(filepath);

    while ((buff = readdir(direct)) != NULL){
        my_putstr(buff->d_name);
        my_putchar('\n');
    }

    closedir(direct);
    return 0;
}
