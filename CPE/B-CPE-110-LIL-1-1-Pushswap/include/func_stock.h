/*
** EPITECH PROJECT, 2023
** func stockage
** File description:
** func_stock
*/

#include "struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

#pragma once


void pos_part(list_t **l_a, list_t **l_b, save_t *save, int len);
void neg_part(list_t **l_a, list_t **l_b, save_t *save, int len);
void node_function(char **av, list_t **first , list_t **last,
        list_t **apex);
int is_sorted_list(list_t *l_a, int args);
void delete_list(list_t **node);
void push_list(list_t **node, list_t **swap);
void p_swp(int argc, char **argv);
void swap_first_to_end(list_t **l_a);
void free_all(list_t **l_a, int args);
void swap_end_to_first(list_t **l_a);
int my_putstr(char const *str);
int     my_getnbr(char *str);
struct list_s *init_linked_list(char **av);