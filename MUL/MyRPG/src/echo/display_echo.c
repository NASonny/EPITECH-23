/*
** EPITECH PROJECT, 2023
** display echo
** File description:
** display the eco
*/

#include "my_rpg.h"

void display_mob(myrpg_t *rpg)
{
    rpg->echo = rpg->f_mob;
    for (int i = 0; i < 10; i++) {
        animate_mob(rpg);
        sfRenderWindow_drawSprite(rpg->window, rpg->echo->sprite, NULL);
        sfRenderWindow_drawText(rpg->window, rpg->echo->health, NULL);
        rpg->echo = rpg->echo->next;
    }
    if (rpg->echo->draw_fight == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->fight->sprite, NULL);
    }
}
