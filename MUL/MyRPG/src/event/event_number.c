/*
** EPITECH PROJECT, 2023
** event part
** File description:
** displacement part
*/

#include "my_rpg.h"

void event_one(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, 0, -rpg->speed) == 1)
        return;
    if (rpg->pers->pos.y > 183)
        move_loop_y(rpg, 1, rpg->speed);
}

void event_two(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, 0, rpg->speed) == 1)
        return;
    if (POS.y > 980)
        POS.y = 980;
    if (rpg->pers->pos.y < 872)
        move_loop_y(rpg, 2, rpg->speed);
}

void event_three(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, -rpg->speed, 0) == 1)
        return;
    if (rpg->pers->pos.x > 631)
        move_loop_x(rpg, 3, rpg->speed);
}

void event_four(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, rpg->speed, 0) == 1)
        return;
    if (rpg->pers->pos.x < 1547)
        move_loop_x(rpg, 4, rpg->speed);
}
