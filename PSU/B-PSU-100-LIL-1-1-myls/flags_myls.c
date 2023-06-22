/*
** EPITECH PROJECT, 2022
** flags base my_ls
** File description:
** my_ls
*/

#include <sys/types.h>
#include <dirent.h>
#include "include/lib.h"
#include "include/functions_lib.h"
#include <stdarg.h>
#include <stdio.h>

struct struct_flag my_init(void)
{
    struct struct_flag flag = { 0 };
    return flag;
};

int flag_a(char *filepath)
{
    struct dirent *reading;
    DIR *rep;
    rep = opendir("." );
    while ((reading = readdir(rep))) {
        my_putstr(reading->d_name);
        my_putchar(' ');
    }
    my_putstr('\n');
    closedir(rep);
}

int flag_r(char *filepath)
{
    //-> print dans l'ordre alphabethique les fichiers sans les .
    return 0;
}

int flag_l(char *filepath)
{
    //-> print les fichier en ligne par des \n avec les droits & login
    return 0;
}

int flag_rupper(char *filepath)
{
    return 0;
}
