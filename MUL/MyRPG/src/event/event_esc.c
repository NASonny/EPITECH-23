/*
** EPITECH PROJECT, 2023
** event escape
** File description:
** display settings
*/

#include "my_rpg.h"

void event_esc(sfRenderWindow *window, sfEvent event, myrpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        rpg->last_win = rpg->which_win;
        rpg->which_win = 2;
        view_gestion(rpg);
        rend_window(window, rpg, event);
    }
}
