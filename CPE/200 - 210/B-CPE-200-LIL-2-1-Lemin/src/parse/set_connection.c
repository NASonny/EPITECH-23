/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** set_connection.c
*/

#include "lemin.h"

void set_connection(lemin_t *lemin)
{
    lemin->chamber_ll->connection = malloc(sizeof(int) * 2048);
}
