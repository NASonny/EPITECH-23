/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** lemin.h
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/Network.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#ifndef LEMIN_H
    #define LEMIN_H

    typedef struct ant_s {
        int num_ant;
        int num_chamber;
        struct ant_s *next_ant;
    } ant_t;

    typedef struct connection_s {
        char *num_chamber;
        char *connect_to;
        char *connect;
        struct connection_s *next_connection;
    } connection_t;

    typedef struct chamber_s {
        struct chamber_s *prev_chamber;
        char *status;
        char *num_chamber;
        int anthill;
        int x;
        int y;
        int *link_chamber;
        struct chamber_s *next_chamber;
    } chamber_t;

    typedef struct lemin_s {
        char *file;
        char **file_to_parth;
        int file_size;
        int start;
        int end;
        int nb_ants;
        int nb_rooms;
        int nb_tunnels;
        int nb_paths;
        int nb_turns;
        int *paths;
        int *ants;
        int *rooms;
        int *tubes;
        chamber_t *f_adress;
        chamber_t *chamber_ll;
        ant_t *ant_ll;
        ant_t *f_ant_adress;
        connection_t *connection_ll;
        connection_t *f_co_adress;
    } lemin_t;

    // Base Functions
    int my_strlen(char const *str);
    char **my_strtoword_array(char const *str, char delim_char);
    int my_strcmp(char const *s1, char const *s2);
    int my_str_isnum(char const *str);
    int my_strlen(char const *str);
    int my_getnbr ( char const *str );

    // Function
    int file_parser(lemin_t *lemin);
    void def_start(lemin_t *lemin, int i);
    void def_end(lemin_t *lemin, int i);
    void debug_print(lemin_t *lemin);
    void create_ant(lemin_t *lemin);

#endif //LEMIN_H
