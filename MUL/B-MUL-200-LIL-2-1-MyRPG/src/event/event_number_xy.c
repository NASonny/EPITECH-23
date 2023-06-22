/*
** EPITECH PROJECT, 2023
** event_number_xy.c
** File description:
** same as event_number but for xy disdplacement
*/

#include "my_rpg.h"

void event_one_xy(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, rpg->speed, -rpg->speed) == 1)
        return;
    if (rpg->pers->pos.x < 1547 && rpg->pers->pos.y > 183)
        move_loop_xy_plus(rpg, 1, rpg->speed);
}

void event_two_xy(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, rpg->speed, rpg->speed) == 1)
        return;
    if (rpg->pers->pos.x < 1547 && rpg->pers->pos.y < 872)
        move_loop_xy_plus(rpg, 2, rpg->speed);
}

void event_three_xy(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, -rpg->speed, -rpg->speed) == 1)
        return;
    if (rpg->pers->pos.x > 631 && rpg->pers->pos.y > 183)
        move_loop_xy_minus(rpg, 1, rpg->speed);
}

void event_four_xy(myrpg_t* rpg, sfIntRect rect_)
{
    delete_and_modify_pers_plus_move(rpg, rect_);
    animation_pers(rpg, rect_);
    if (check_collide(rpg, -rpg->speed, rpg->speed) == 1)
        return;
    if (rpg->pers->pos.x > 631 && rpg->pers->pos.y < 872)
        move_loop_xy_minus(rpg, 2, rpg->speed);
}
