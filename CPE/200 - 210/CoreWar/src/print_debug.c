/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** print_debug.c
*/

#include "lemin.h"

void print_status(char *status)
{
    if (my_strcmp(status, "start") == 1)
        my_printf("##start\n");
    else if (my_strcmp(status, "end") == 1)
        my_printf("##end\n");
}

void debug_print(lemin_t *lemin)
{
    chamber_t *temp = lemin->f_adress;
    connection_t *temp_co = lemin->f_co_adress;
    my_printf("#number_of_ants\n%d\n", lemin->nb_ants);
    my_printf("#rooms\n");
    while (temp->next_chamber != NULL) {
        print_status(temp->status);
        my_printf("%s ", temp->num_chamber);
        my_printf("%d ", temp->x);
        my_printf("%d\n", temp->y);
        temp = temp->next_chamber;
    }
    my_printf("#tunnels\n");
    while (temp_co->next_connection != NULL) {
        my_printf("%s-%s\n", temp_co->num_chamber, temp_co->connect_to);
        temp_co = temp_co->next_connection;
    }
    my_printf("#moves\n");
    free(temp);
    free(temp_co);
}
