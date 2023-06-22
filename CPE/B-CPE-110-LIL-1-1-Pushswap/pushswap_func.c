/*
** EPITECH PROJECT, 2022
** func
** File description:
** pushswap
*/


#include "include/struct.h"
#include "include/func_stock.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void swap_first_to_end(list_t **l_a)
{
    *l_a = (*l_a)->next;
}

void swap_end_to_first(list_t **l_a)
{
    *l_a = (*l_a)->preced;
}

void delete_list(list_t **node)
{
    if (*node == (*node)->next){
        (*node) = NULL;
    } else {
        (*node)->preced->next = (*node)->next;
        (*node)->next->preced = (*node)->preced;
        (*node) = (*node)->next;
    }
}

void push_list(list_t **node, list_t **swap)
{
    list_t *keep;
    list_t *store;

    keep = *node;
    delete_list(node);

    if ((*swap) != NULL){
        store = (*swap)->preced;
        (*swap)->preced = keep;
        (*swap)->preced->next = (*swap);
        (*swap)->preced->preced = store;
        (*swap)->preced->preced->next = keep;
        *swap = (*swap)->preced;
    } else {
        (*swap) = keep;
        (*swap)->next = (*swap);
        (*swap)->preced = (*swap);
    }
}

void free_all(list_t **l_a, int args)
{
    list_t *tmp;

    for (int q = 0; q < args; q++) {
        tmp = *l_a;
        *l_a = (*l_a)->next;
        free(tmp);
    }
}
