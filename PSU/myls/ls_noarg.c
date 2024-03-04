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

void my_ls_no_arg (void)
{

    DIR *direct;
    struct dirent *buff;

    direct = opendir(".");

    while ((buff = readdir(direct)) != NULL){
        if (buff->d_name[0] != '.'){
            my_putstr(buff->d_name);
            my_putchar('\n');
        }
    }
}
