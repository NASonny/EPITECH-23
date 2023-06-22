/*
** EPITECH PROJECT, 2022
** Pushswap Project
** File description:
** Pushswap CPE
*/

#include "include/struct.h"
#include "include/func_stock.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int is_sorted_list(list_t *l_a, int args)
{
    int is_sort = 0;

    for (int i = 1; i < args; i++) {
        if (l_a->nb > l_a->next->nb)
            is_sort = is_sort + 1;
        l_a = l_a->next;
    }
    l_a = l_a->next;
    if (is_sort == 0)
        return 0;
    return 1;
}

void pos_part(list_t **l_a, list_t **l_b, save_t *save, int args)
{
    for (int f = 1; f <= args; f++){
        if (((*l_a)->nb >> save->x) & 1) {
            push_list(l_a, l_b);
            swap_first_to_end(l_b);
            my_putstr("pb rb ");
            save->y++;
        }else {
            swap_first_to_end(l_a);
            my_putstr("ra ");
        }
    }
    if (l_b != NULL) {
        for (int f = 0; f < save->y; f++){
            push_list(l_b, l_a);
            my_putstr("pa ");
            swap_first_to_end(l_a);
            my_putstr("ra ");
        }
    }
}

void neg_part(list_t **l_a, list_t **l_b, save_t *save, int args)
{
    for (int f = 1; f <= args; f++){
        if (((*l_a)->nb >> 31) & 1) {
            push_list(l_a, l_b);
            my_putstr("pb ");
            save->y++;
        } else {
            swap_first_to_end(l_a);
            my_putstr("ra ");
        }
    }
    if (l_b != NULL) {
        for (int f = 0; f < save->y; f++){
            push_list(l_b, l_a);
            my_putstr("pa ");
        }
    }
}

void p_swp(int argc, char **argv)
{
    list_t *l_a = init_linked_list(argv);
    list_t *l_b = NULL;
    int args = argc - 1;
    save_t save;

    if (is_sorted_list(l_a, args) == 0){
        my_putstr("\n");
        free_all(&l_a, args);
        return;
    }

    for (save.x = 0; save.x < 31; save.x++){
        save.y = 0;
        pos_part(&l_a, &l_b, &save, args);
    }
    save.y = 0;
    neg_part(&l_a, &l_b, &save, args);
    my_putstr("rb\n");
    free_all(&l_a, args);
}
