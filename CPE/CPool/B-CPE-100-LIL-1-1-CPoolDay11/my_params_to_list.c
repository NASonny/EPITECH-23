/*
** EPITECH PROJECT, 2022
** my params to list
** File description:
** Nothing there :/
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/mylist.h"

linked_list_t *my_params_to_list(int argc, char *const *argv)
{
    int i = 0;
    for ( i = 0; i < argc; i++)
        my_putchar(argv[i]);
    return 0;
}
