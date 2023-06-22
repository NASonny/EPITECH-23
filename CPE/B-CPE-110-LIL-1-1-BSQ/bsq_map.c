/*
** EPITECH PROJECT, 2022
** BSQ Bootstrap
** File description:
** BSQ Project
*/

#include "include/functions_lib.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>

void init_replace(char **map[])
{
    for (int i = 0; map[i] != NULL; i++){
        for (int j = 0; map[i][j] != '\0'; j++){
            map[i][j] = map[i][j] == 'o' ? '0' : map[i][j];
            map[i][j] = map[i][j] == '.' ? '1' : map[i][j];
        }
    }
}

void wh_map(struct_map *bsq)
{
    return;
}

void check_map(struct_map *bsq)
{
    return;
}
