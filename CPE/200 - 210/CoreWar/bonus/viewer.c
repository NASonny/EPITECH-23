/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** viewer.c
*/

#include "lemin.h"

void help(void)
{
    write(1, "USAGE:\n", 7);
}

int error_handler(int ac, char **av)
{
    if (ac > 1) {
        write(2, "Error: no File given\n", 21);
        return 84;
    }
    return 0;
}

int main(int ac, char **av) {
    if (error_handler(ac, av) == 84) {
        return 84;
    }
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return 0;
    }
    lemin_t *lemin = malloc(sizeof(lemin_t) + 1);
    if (file_parser(lemin) == 84) {
        return 84;
    } else {
        view_anthill(lemin);
        return 0;
    }
}
