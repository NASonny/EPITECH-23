/*
** EPITECH PROJECT, 2023
** animation pers
** File description:
** Change de rect.left of the rect
*/

#include "my_rpg.h"

void animation_pers(myrpg_t* rpg, sfIntRect rect_)
{
    sfVector2f scale = {0.7, 0.7};
    sfSprite_setScale(rpg->pers->sprite, scale);
    rpg->frame_number++;
    if (rpg->frame_number > 8)
        rpg->frame_number = 0;
    rect_.left = rpg->frame_number * 64;

    sfSprite_setTextureRect(rpg->pers->sprite, rect_);
}
