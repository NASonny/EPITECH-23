/*
** EPITECH PROJECT, 2022
** Second part of BSQ
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
#include <stddef.h>

void display_array(char **array)
{
    for (int i = 0; array[i] != NULL; i++){
        my_putstr(array[i]);
        my_putchar('\n');
    }
}

char **get_map(char *path)
{
    struct stat sb;

    int fd = open_file(path);
    stat(path, &sb);
    int size = sb.st_size;
    char *buffer = malloc(sizeof(char) * (size + 1));

    if (fd == -1)
        return NULL;

    read_file(fd, buffer, size);
    close(fd);
    return my_str_to_word_array(buffer);
}

int size_line(char *map)
{
    int size = 0;
    int i = 0;

    if (map[0] == '\0')
        return (84);

    while (map[i] != '\n') {
        size++;
        i++;
    }
    return size;
}

int nb_line(char *map)
{
    int number = 0;
    int i = 0;

    if (map[0] == '\0')
        return (84);
    while (map[i] != '\0') {
        if (map[i] == '\n'){
            number++;
        }
        i++;
    }
    if (number <= 0)
        return (84);

    return number;
}
