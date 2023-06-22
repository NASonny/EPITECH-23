/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** create_ant.c
*/

#include "lemin.h"

void create_ant(lemin_t *lemin)
{
    ant_t *temp = lemin->ant_ll = malloc(sizeof(ant_t));
    lemin->f_ant_adress = lemin->ant_ll;
    for (int i = 0; i < lemin->nb_ants; ++i) {
        temp->num_ant = i + 1;
        temp->next_ant = malloc(sizeof(ant_t));
        temp = temp->next_ant;
    }
    free(temp);
}
