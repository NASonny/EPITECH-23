/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** parser.c
*/

#include "lemin.h"

void parse_it(lemin_t *lemin)
{
    lemin->f_adress = lemin->chamber_ll = malloc(sizeof(chamber_t));
    lemin->f_co_adress = lemin->connection_ll = malloc(sizeof(connection_t));
    for (int i = 0; lemin->file_to_parth[i] != NULL; ++i) {
        i += create_chamber(lemin, i);
        if (lemin->chamber_ll->status != NULL) {
            lemin->chamber_ll->next_chamber = malloc(sizeof(chamber_t));
            lemin->chamber_ll->next_chamber = lemin->chamber_ll->next_chamber;
            lemin->chamber_ll->next_chamber->prev_chamber = lemin->chamber_ll;
            lemin->chamber_ll = lemin->chamber_ll->next_chamber;
            lemin->nb_rooms += 1;
        }
        if (lemin->connection_ll->connect != NULL) {
            lemin->connection_ll->next_connection =
            malloc(sizeof(connection_t));
            lemin->connection_ll->next_connection =
            lemin->connection_ll->next_connection;
            lemin->connection_ll = lemin->connection_ll->next_connection;
            lemin->nb_tunnels += 1;
        }
    }
}

char *read_file(void)
{
    char *buffer = malloc(sizeof(char) * 4098);
    int chara = 0;

    if (buffer == NULL)
        return NULL;
    while (read(0, buffer + chara, 1) > 0 && chara < 4098) {
        chara++;
    }
    buffer[chara] = '\0';
    return buffer;
}

int file_parser(lemin_t *lemin)
{
    char *buffer = 0;
    buffer = read_file();
    lemin->file = buffer;
    lemin->file_to_parth = my_strtoword_array(lemin->file, '\n');
    lemin->file_size = my_strlen(lemin->file);
    parse_it(lemin);
    if (lemin->start == 0 || lemin->end == 0 || lemin->nb_ants == 0
    || lemin->nb_rooms == 0 || lemin->nb_tunnels == 0)
        return 84;
    return 0;
}
