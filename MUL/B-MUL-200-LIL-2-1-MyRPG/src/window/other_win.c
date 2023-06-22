/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** other_win.c
*/

#include "my_rpg.h"

void other_window(myrpg_t *rpg, sfEvent event)
{
    if (rpg->which_win == 3) {
        display_help(rpg);
        event_handler(rpg, event);
    }
}
