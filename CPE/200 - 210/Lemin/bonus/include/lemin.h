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
#include <unistd.h>

#ifndef LEMIN_H
    #define LEMIN_H

    typedef struct connection_s {
        int connection;
        struct connection_s *next_connection;
    } connection_t;

    typedef struct chamber_s {
        struct chamber_s *prev_chamber;
        char *status;
        int num_chamber;
        int anthill;
        int x;
        int y;
        int *link_chamber;
        connection_t *f_adress;
        connection_t *connection;
        struct chamber_s *next_chamber;
    } chamber_t;

    typedef struct lemin_s {
        char *file;
        char **file_to_parth;
        int nb_ants;
        int nb_rooms;
        int nb_tubes;
        int nb_paths;
        int nb_turns;
        int *paths;
        int *ants;
        int *rooms;
        int *tubes;
        chamber_t *f_adress;
        chamber_t *chamber_ll;
    } lemin_t;

    // Base Functions
    char **my_strtoword_array(char const *str, char delim_char);
    int my_strcmp(char const *s1, char const *s2);
    int my_str_isnum(char const *str);
    int my_strlen(char const *str);
    int my_getnbr ( char const *str );
    int my_printf(const char *format, ...);
    int my_putstr(char const *str);
    int my_put_nbr(int nb);

    // Function
    int file_parser(lemin_t *lemin);
    void def_start(lemin_t *lemin, int i);
    void def_end(lemin_t *lemin, int i);
    void debug_print(lemin_t *lemin);

    // Create Chamber

    int create_chamber(lemin_t *lemin, int i);
    void add_chamber(lemin_t *lemin, int i);

    // Bonus Functions

    void view_anthill(lemin_t *lemin);

#endif //LEMIN_H
