/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** solver_functions
*/

#include "include/func_includes.h"
#include "include/struct.h"

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
