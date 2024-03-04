/*
** EPITECH PROJECT, 2023
** my_navy
** File description:
** help
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
#include <ncurses.h>
#include "../lib/my/my.h"
#include "../include/my_navy.h"

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("     first_player_pid: only for the 2nd player");
    my_putstr(". pid of the first player.\n");
    my_putstr("     navy_positions: file representing");
    my_putstr(" the positions of the ships.\n");
}
