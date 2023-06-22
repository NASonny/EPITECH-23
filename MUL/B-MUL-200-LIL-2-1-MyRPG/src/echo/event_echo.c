/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** event_echo.c
*/

#include "my_rpg.h"

void he_lvl_up(myrpg_t *rpg)
{
    if (rpg->pers->xp >= rpg->pers->card->next_lvl) {
        rpg->pers->xp = rpg->pers->xp - rpg->pers->card->next_lvl;
        rpg->pers->level += 1;
        rpg->pers->skill_point += 1;
        rpg->pers->card->next_lvl *= 1.1;
    }
}

void echo_is_dead(myrpg_t *rpg)
{
    if (rpg->echo->pv <= 0) {
        if (my_strcmp(rpg->echo->status, "kill") == 0) {
            rpg->pers->xp += 10;
            rpg->pers->gold += 10;
            rpg->echo->pv = rpg->echo->last_pv * 1.04;
            rpg->echo->last_pv = rpg->echo->pv;
            rpg->echo->strength *= 1.10;
            sfText_setString(rpg->echo->health, int_to_str(rpg->echo->pv));
        }
    }
}

int can_attack(myrpg_t *rpg)
{
    decrease_pv(rpg);
    rpg->pers->time_atk =
    sfClock_getElapsedTime(rpg->pers->cooldown_atk->cooldow_atk);
    rpg->pers->sec_cooldown = rpg->pers->time_atk.microseconds / 1000000.0;
    if (rpg->pers->sec_cooldown > 1.0) {
        sfClock_restart(rpg->pers->cooldown_atk->cooldow_atk);
        return 1;
    }
    return 0;
}

void echo_keyboard_event(myrpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        if (can_attack(rpg) == 1) {
            rpg->echo->pv -= rpg->pers->strength;
            sfText_setString(rpg->echo->health, int_to_str(rpg->echo->pv));
        }
    }
}

void event_echo(myrpg_t *rpg)
{
    rpg->pers->int_r = set_rect(rpg->pers->hitbox);
    rpg->echo = rpg->f_mob;
    for (int i = 0; i < 10; i++) {
        rpg->echo->int_r = set_rect(rpg->echo->hitbox);
        if (sfIntRect_intersects(&rpg->pers->int_r, &rpg->echo->int_r, NULL) ==
        sfTrue) {
            echo_keyboard_event(rpg);
        } else {
            rpg->echo->draw_fight = 0;
        }
        echo_is_dead(rpg);
    }
    he_lvl_up(rpg);
}
