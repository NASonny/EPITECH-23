/*
** EPITECH PROJECT, 2022
** func bsq
** File description:
** bsq
*/

#ifndef FUNCTION_LIB
    #define FUNCTION_LIB


    #include <sys/types.h>
    #include <dirent.h>
    #include <stdarg.h>
    #include <stdio.h>
    #include <unistd.h>

    typedef struct struct_map {
        int i;
        int j;
        char **map;

        int min;
        int max;
    } struct_map;

void my_putchar(char c);
int my_putstr(char const *str);
int open_file(char const *filepath);
void check_map(struct_map *bsq);
char **my_str_to_word_array (char const * str);
int read_file(int fd, char *buffer, int size);
void display_array(char **array);
void init_replace(char **map[]);
char **get_map(char *path);
int size_line(char *map);
int nb_line(char *map);
int my_strlen(char const *str);

#endif /* !FUNCTION_LIB */
