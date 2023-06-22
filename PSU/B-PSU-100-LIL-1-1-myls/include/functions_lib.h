/*
** EPITECH PROJECT, 2022
** func lib
** File description:
** my_ls
*/

#ifndef FUNCTION_LIB
    #define FUNCTION_LIB


    #include <sys/types.h>
    #include <dirent.h>
    #include "lib.h"
    #include <stdarg.h>
    #include <stdio.h>

void my_putchar(char c);
int my_putstr(char const *str);
struct struct_flag my_init(void);
int ls_arg(char *filepath);
void my_ls_no_arg (void);
int flag_a(char *filepath);
int flag_r(char *filepath);
int flag_l(char *filepath);
int flag_rupper(char *filepath);
int flag_d(char *filepath);
int flag_t(char *filepath);

#endif /* !FUNCTION_LIB */
