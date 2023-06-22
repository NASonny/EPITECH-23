/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** def_start.c
*/

#include "lemin.h"

void def_start(lemin_t *lemin, int i)
{
    char **array = my_strtoword_array(lemin->file_to_parth[i + 1], ' ');
    if (lemin->file_to_parth[i + 1] != NULL &&
    lemin->file_to_parth[i + 1][0] != '#') {
        lemin->chamber_ll->status = "start";
        lemin->chamber_ll->num_chamber = array[0];
        lemin->chamber_ll->x = my_getnbr(array[1]);
        lemin->chamber_ll->y = my_getnbr(array[2]);
    }
}
