/*
** EPITECH PROJECT, 2023
** event pnj pers
** File description:
** interaction between pnj and pers
*/

#include "my_rpg.h"

void pnj_pers_keyboard_event(myrpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyE))
        rpg->draw = 1;
}

void event_pnj_pers(myrpg_t *rpg)
{
    rpg->pers->int_r = set_rect(rpg->pers->hitbox);
    rpg->pnj->int_r = set_rect(rpg->pnj->hitbox);
    sfSprite *sprite = sfSprite_create();
    if (sfIntRect_intersects(&rpg->pers->int_r, &rpg->pnj->int_r, NULL) ==
    sfTrue) {
        pnj_pers_keyboard_event(rpg);
    } else {
        sfSprite_destroy(sprite);
        rpg->draw = 0;
    }
}
