/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** window_set.c
*/

#include "my_rpg.h"

void settings_window(myrpg_t *rpg, sfEvent event)
{
    sfRenderWindow_clear(rpg->window, sfBlack);
    sfRenderWindow_drawText(rpg->window, rpg->menu->settings, NULL);
    if (sfRenderWindow_pollEvent(rpg->window, &event) && event.type
    == sfEvtClosed)
        sfRenderWindow_close(rpg->window);
    sfRenderWindow_display(rpg->window);
}
