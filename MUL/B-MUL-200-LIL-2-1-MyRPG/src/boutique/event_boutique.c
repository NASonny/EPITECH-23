/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** event_boutique.c
*/

#include "my_rpg.h"

void which_sell1(myrpg_t *rpg, sfVector2i mouse)
{
    if (mouse.x >= 800 && mouse.x <= 895 && mouse.y >= 270 && mouse.y <= 319) {
        if (check_money(rpg, 50) == 1)
            rpg->pers->pv += 10;
        return;
    }
    if (mouse.x >= 1022 && mouse.x <= 1115 && mouse.y >= 275 &&
    mouse.y <= 320) {
        if (check_money(rpg, 500) == 1)
            rpg->pers->xp += 500;
        return;
    }
    if (mouse.x >= 800 && mouse.x <= 895 && mouse.y >= 450 && mouse.y <= 500) {
        if (check_money(rpg, 100) == 1)
            rpg->pers->card->max_pv += 50;
        return;
    }
}

void which_sell2(myrpg_t *rpg, sfVector2i mouse)
{
    if (mouse.x >= 1022 && mouse.x <= 1115 && mouse.y >= 450
    && mouse.y <= 500) {
        if (check_money(rpg, 1000) == 1)
            rpg->pers->card->max_pv += 200;
        return;
    }
    if (mouse.x >= 800 && mouse.x <= 890 && mouse.y >= 617 && mouse.y <= 665) {
        if (check_money(rpg, 200) == 1)
            rpg->pers->strength += 20;
        return;
    }
    if (mouse.x >= 1015 && mouse.x <= 1110 && mouse.y >= 617
    && mouse.y <= 665) {
        if (check_money(rpg, 5000) == 1)
            rpg->pers->strength += 200;
        return;
    }
}

void sell_boutique(myrpg_t *rpg, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (rpg->boutique->open == 1 && event.type == sfEvtMouseButtonPressed) {
        which_sell1(rpg, mouse);
        which_sell2(rpg, mouse);
    } else {
        return;
    }
}
