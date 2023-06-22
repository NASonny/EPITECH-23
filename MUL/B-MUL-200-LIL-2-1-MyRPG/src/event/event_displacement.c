/*
** EPITECH PROJECT, 2023
** event part
** File description:
** displacement part
*/

#include "my_rpg.h"

void event_z_q_s_d(myrpg_t* rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ))
        event_one(rpg, (sfIntRect){0, 0, 70, 60});
    if (sfKeyboard_isKeyPressed(sfKeyS))
        event_two(rpg, (sfIntRect){0, 120, 70, 70});
    if (sfKeyboard_isKeyPressed(sfKeyQ))
        event_three(rpg, (sfIntRect){0, 60, 70, 65});
    if (sfKeyboard_isKeyPressed(sfKeyD))
        event_four(rpg, (sfIntRect){0, 190, 70, 50});
}

void event_keypressed_displacement_2(myrpg_t* rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) && sfKeyboard_isKeyPressed(sfKeyS))
        event_two_xy(rpg, (sfIntRect){0, 190, 70, 50});
    else if (sfKeyboard_isKeyPressed(sfKeyQ) && sfKeyboard_isKeyPressed(sfKeyS))
        event_four_xy(rpg, (sfIntRect){0, 60, 70, 65});
    else
        event_z_q_s_d(rpg);
}

void event_keypressed_displacement(myrpg_t* rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyD) && sfKeyboard_isKeyPressed(sfKeyZ))
        event_one_xy(rpg, (sfIntRect){0, 190, 70, 50});
    else if (sfKeyboard_isKeyPressed(sfKeyQ) && sfKeyboard_isKeyPressed(sfKeyZ))
        event_three_xy(rpg, (sfIntRect){0, 60, 70, 65});
    else
        event_keypressed_displacement_2(rpg);
}
