/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** set_chamber.c
*/

#include "lemin.h"

int chamber_exist(lemin_t *lemin, char *num_chamber, char *connect_to)
{
    chamber_t *temp = lemin->f_adress;
    int exist = 0;
    while (temp->next_chamber != NULL) {
        if (my_strcmp(temp->num_chamber, num_chamber))
            exist += 1;
        if (my_strcmp(temp->num_chamber, connect_to))
            exist += 1;
        temp = temp->next_chamber;
    }
    if (exist == 2)
        return 1;
    return 0;
}

void create_connection(lemin_t *lemin, int i)
{
    char **temp_array = my_strtoword_array(lemin->file_to_parth[i], '-');
    int j = 0;
    if (temp_array == NULL)
        return;
    for (; temp_array[j] != NULL; ++j);
    if (j != 2)
        return;
    if (temp_array[0][0] != '#' && my_strlen(temp_array[0]) > 0 &&
    my_strlen(temp_array[1]) > 0 && my_strcmp(temp_array[0], temp_array[1])
    == 0) {
        if (chamber_exist(lemin, temp_array[0],
        temp_array[1]) == 1) {
            lemin->connection_ll->num_chamber = temp_array[0];
            lemin->connection_ll->connect_to = temp_array[1];
            lemin->connection_ll->connect = "connect";
        }
    }
}

int check_existence(lemin_t *lemin, char **array)
{
    chamber_t *temp = lemin->f_adress;
    while (temp->next_chamber != NULL) {
        if (my_strcmp(temp->num_chamber, array[0]))
            return 1;
        if (temp->x == my_getnbr(array[1]) && temp->y == my_getnbr(array[2]))
            return 1;
        temp = temp->next_chamber;
    }
    return 0;
}

void add_chamber(lemin_t *lemin, int i)
{
    char **temp_array = my_strtoword_array(lemin->file_to_parth[i], ' ');
    int j = 0;
    if (temp_array == NULL)
        return;
    for (; temp_array[j] != NULL; ++j);
    if (j == 1)
        create_connection(lemin, i);
    if (j != 3)
        return;
    if (check_existence(lemin, temp_array) == 1)
        return;
    if (temp_array[0][0] != '#' && my_strlen(temp_array[0]) > 0 &&
    my_str_isnum(temp_array[1]) == 1 && my_str_isnum(temp_array[2]) == 1) {
        lemin->chamber_ll->status = "chamber";
        lemin->chamber_ll->num_chamber = temp_array[0];
        lemin->chamber_ll->x = my_getnbr(temp_array[1]);
        lemin->chamber_ll->y = my_getnbr(temp_array[2]);
    }
}

int create_chamber(lemin_t *lemin, int i)
{
    if (i == 0 && my_str_isnum(lemin->file_to_parth[i]) == 1) {
        lemin->nb_ants = my_getnbr(lemin->file_to_parth[i]);
        return 0;
    } else if (i == 1 && lemin->nb_ants == 0 &&
    my_str_isnum(lemin->file_to_parth[i]) == 1) {
        lemin->nb_ants = my_getnbr(lemin->file_to_parth[i]);
        return 0;
    }
    if (my_strcmp(lemin->file_to_parth[i], "##start") == 1 &&
    lemin->file_to_parth[i + 1] != NULL && lemin->start == 0) {
        def_start(lemin, i);
        lemin->start = 1;
        return 1;
    }
    if (my_strcmp(lemin->file_to_parth[i], "##end") == 1 &&
    lemin->file_to_parth[i + 1] != NULL && lemin->end == 0) {
        def_end(lemin, i);
        lemin->end = 1;
        return 1;
    } else {
        add_chamber(lemin, i);
        return 0;
    }
}
