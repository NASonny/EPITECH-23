/*
** EPITECH PROJECT, 2022
** where i put my struct
** File description:
** struct pushswap
*/

#include "include/struct.h"
#include "include/func_stock.h"
#include <stdio.h>
#include <stdlib.h>

void node_function(char **av, list_t **first , list_t **last, list_t **apex)
{
    list_t *list_next;

    for (int i = 2; av[i] != NULL; i++){
        list_next = malloc(sizeof(list_t));
        list_next->nb = my_getnbr(av[i]);
        list_next->next = *first;
        (*apex)->next = list_next;
        *last = *apex;
        *apex = (*apex)->next;
        (*apex)->preced = *last;
    }
}

struct list_s *init_linked_list(char **av)
{

    list_t *apex = malloc(sizeof(list_t));
    list_t *last;
    list_t *first;

    if (!apex)
        return NULL;
    apex->nb = my_getnbr(av[1]);
    apex->preced = apex;
    apex->next = apex;
    first = apex;
    last = apex;
    node_function(av, &first, &last, &apex);
    last = apex;
    apex = apex->next;
    apex->preced = last;
}
