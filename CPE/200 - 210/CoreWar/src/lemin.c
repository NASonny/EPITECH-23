/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** lemin.c
*/

#include "lemin.h"

void help(void)
{
    write(1, "USAGE:\n", 7);
}

int error_handler(int ac)
{
    if (ac > 1) {
        write(2, "Too much arguments.\n", 21);
        return 84;
    }
    return 0;
}

void free_all(lemin_t *lemin)
{
    free(lemin);
}

int main(int ac, char **av)
{
    if (error_handler(ac) == 84) {
        return 84;
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    }
    lemin_t *lemin = malloc(sizeof(lemin_t) + 1);
    if (file_parser(lemin) == 84) {
        free_all(lemin);
        return 84;
    } else {
        create_ant(lemin);
        debug_print(lemin);
        return 0;
    }
}
