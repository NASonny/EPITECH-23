/*
** EPITECH PROJECT, 2022
** Header Dante
** File description:
** Dante
*/

#include "include/func_includes.h"
#include "include/struct.h"


int open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1){
        printf("Impossible d'ouvrir le fichier selectionné");
        return -1;
    }
    return fd;
}

int read_file(int fd, char *buffer, int size)
{
    int read_stat = read(fd, buffer, size);
    buffer[size] = '\0';

    if (read_stat == -1) {
        printf("Impossible de lire le fichier selectionné");
        return 84;
    }
    if (size == 0)
        return 84;
    return 0;
}
