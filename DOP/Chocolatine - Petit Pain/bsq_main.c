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

void initbsq(struct_map* bsq, char *path)
{
    bsq->i = 0;
    bsq->j = 0;
    bsq->map = get_map(path);
    bsq->max = 0;
    bsq->min = 0;
}

char **tab (char *av[])
{
    struct_map bsq;
    initbsq(&bsq, av[1]);
    if (bsq.map == NULL)
        return NULL;
    init_replace(bsq.map);
    for (; bsq.map[bsq.i] != NULL; bsq.i++){
        for (; bsq.map[bsq.i][bsq.j] != '\0'; bsq.j++){
            check_map(&bsq);
        }
    }
    return (bsq.map);
}

int main(int ac, char **av)
{
    if (ac != 2){
        my_putstr("Usage: ./bsq [map]\n");
        return 84;
    }

    char **map = tab(av);
    if (map == NULL)
        return 84;
    display_array(map);
}
