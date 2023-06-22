/*
** EPITECH PROJECT, 2022
** Project PSU
** File description:
** Sokoban
*/

#include "include/functions_lib.h"
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

char *get_map(int ac, char **av)
{
    struct stat sb;
    int fd = open_file(av[1]);
    stat(av[1], &sb);
    int size = sb.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (fd == -1)
        return NULL;

    read_file(fd, buffer, size);
    close(fd);
    return buffer;
    free(buffer);
}

void sokoban(int ac, char **av)
{
    int keypush = 0;
    initscr();

    char *map = get_map(ac, av);

    while (keypush != ' '){
        clear();
        printw("%s\n", map);
        keypush = getch();
        if (keypush == ' '){
            refresh();
            endwin();
        }
    }
}

int main(int ac, char **av, char **env)
{
    if (!env[0])
        return 0;
    if (av[2] != NULL)
        return 84;
    if (ac == 2){
        if (av[1][0] == '-' && av[1][1] == 'h') {
            help();
            return (0);
            }
    }
    sokoban(ac, av);
    my_putchar('\n');
    endwin();
    return 0;
}
