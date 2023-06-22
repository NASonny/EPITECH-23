/*
** EPITECH PROJECT, 2022
** func sokoban
** File description:
** sokoban
*/

#ifndef FUNCTION_LIB
    #define FUNCTION_LIB

    #include <sys/types.h>
    #include <dirent.h>
    #include <stdarg.h>
    #include <stdio.h>

typedef struct {
    ////////////////////////////////
} soko_t;

void my_putchar(char c);
int my_putstr(char const *str);
int open_file(char const *filepath);
void read_file(int fd, char *buffer, int size);
char *get_map(int ac, char **av);
int my_strlen(char const *str);
void sokoban(int ac, char **av);
int get_player_position(int x, int y);
void help(void);

#endif /* !FUNCTION_LIB */
