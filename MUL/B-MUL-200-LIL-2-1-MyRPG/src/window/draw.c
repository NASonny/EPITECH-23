/*
** EPITECH PROJECT, 2023
** MY RPG PROJECT
** File description:
** my_rpg file (draw)
*/

#include "my_rpg.h"

void draw_all(sfRenderWindow *window, myrpg_t *rpg)
{
    sfRenderWindow_clear(rpg->window, sfBlack);
    sfRenderWindow_setView(rpg->window, rpg->view);
    sfRenderWindow_drawSprite(rpg->window, rpg->background->sprite, 0);
    display_mob(rpg);
    sfRenderWindow_drawSprite(rpg->window, rpg->pers->sprite, 0);
    sfRenderWindow_drawSprite(rpg->window, rpg->pnj->sprite, 0);
    sfRenderWindow_drawSprite(rpg->window, rpg->background_iso->sprite, 0);
    e_interaction(rpg);
    display_mob(rpg);
    display_card(rpg);
    display_inventory(rpg);
    display_boutique(rpg);
    sfRenderWindow_display(window);
}
