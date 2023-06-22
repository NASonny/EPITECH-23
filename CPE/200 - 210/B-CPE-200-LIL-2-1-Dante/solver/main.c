/*
** EPITECH PROJECT, 2023
** dante
** File description:
** CPE
*/

#include "include/func_includes.h"
#include "include/struct.h"

void initdante(struct_t *dante, char *path)
{
    dante->map = get_map(path);
}

char **tab (char *av[])
{
    struct_t dante;
    initdante(&dante, av[1]);
    if (dante.map == NULL)
        return NULL;
    return (dante.map);
}

int main(int argc, char **argv)
{
    if (argc != 2){
        printf("Usage: ./solver [map]\n");
        return 84;
    }

    char **map = tab(argv);
    if (map[1] == NULL){
        printf("no solution found\n");
        return 0;
    }
    display_array(map);
}
