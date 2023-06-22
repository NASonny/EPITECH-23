/*
** EPITECH PROJECT, 2022
** Header BSQ
** File description:
** BSQ
*/

#include "include/functions_lib.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1)
        return (84);
    return (fd);
}

void read_file(int fd, char *buffer, int size)
{
    read(fd, buffer, size);
}

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     map file representing the warehouse map,\n");
    my_putstr("     containing ‘#’ for walls,\n");
    my_putstr("     ‘P’ for the player, ‘X’ for boxes\n");
    my_putstr("     and ‘O’ for storage locations.\n\n");
    my_putstr("     Made by Sonny TEK1 EPITECH LILLE\n");
}
