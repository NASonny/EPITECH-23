/*
** EPITECH PROJECT, 2023
** echo anim
** File description:
** animation about echo
*/

#include "my_rpg.h"

void moov_mob(myrpg_t* rpg)
{
    rpg->echo->time = sfClock_getElapsedTime(rpg->echo->clock);
    rpg->echo->seconds = rpg->echo->time.microseconds / 1000000.0;
    if (rpg->echo->seconds > 0.1) {
        rpg->echo->rect.left += 19;
        if (rpg->echo->rect.left >= 171)
            rpg->echo->rect.left = 0;
        sfSprite_setPosition(rpg->echo->sprite, rpg->echo->pos);
        sfSprite_setScale(rpg->echo->sprite, rpg->echo->scale);
        sfSprite_setTextureRect(rpg->echo->sprite, rpg->echo->rect);
        sfClock_restart(rpg->echo->clock);
    }
    rpg->echo = rpg->echo->next;
}

void animate_mob(myrpg_t *rpg)
{
    rpg->echo = rpg->f_mob;
    for (int i = 0; i < 10; i++)
        moov_mob(rpg);
}
