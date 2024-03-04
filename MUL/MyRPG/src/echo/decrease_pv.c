/*
** EPITECH PROJECT, 2023
** MY_RPG - decrease_pv.c
** File description:
** decrease pc function and handle this
*/

#include "my_rpg.h"

void increase_pv(myrpg_t* rpg)
{
    rpg->pers->time_atk = sfClock_getElapsedTime(COOLDOWN_ATK->cooldow_atk);
    rpg->pers->sec_cooldown = rpg->pers->time_atk.microseconds / 1000000.0;
    if (rpg->pers->sec_cooldown > 1.5) {
        rpg->pers->pv += 5;
        if (rpg->pers->pv >= rpg->pers->card->max_pv)
            rpg->pers->pv = rpg->pers->card->max_pv;
        sfText_setString(rpg->pers->card->pv, int_to_str(rpg->pers->pv));
        sfClock_restart(COOLDOWN_ATK->cooldow_atk);
        return;
    }
}

void decrease_pv(myrpg_t *rpg)
{
    rpg->pers->time_atk = sfClock_getElapsedTime(COOLDOWN_ATK->cooldow_atk);
    rpg->pers->sec_cooldown = rpg->pers->time_atk.microseconds / 1000000.0;
    if (rpg->pers->sec_cooldown > 3.5) {
        rpg->pers->pv -= rpg->echo->strength;
        if (rpg->pers->pv <= 0)
            rpg->pers->pv = 0;
        sfText_setString(rpg->pers->card->pv, int_to_str(rpg->pers->pv));
        sfClock_restart(COOLDOWN_ATK->cooldow_atk);
        return;
    }
}

void pv_decreaser(myrpg_t* rpg)
{
    rpg->pers->int_r = set_rect(rpg->pers->hitbox);
    if (sfIntRect_intersects(&rpg->pers->int_r, &rpg->echo->int_r, NULL) ==
    sfTrue) {
        rpg->echo->draw_fight = 1;
        decrease_pv(rpg);
        echo_keyboard_event(rpg);
    } else
        increase_pv(rpg);
}
