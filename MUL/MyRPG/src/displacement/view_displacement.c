/*
** EPITECH PROJECT, 2023
** view displacement management
** File description:
** move the sfview
*/

#include "my_rpg.h"

void part2(myrpg_t* rpg)
{
    if (POS.y > 200 && POS.x < 631)
        return view_displacement(rpg, 631, 200);
    if (POS.x > 1546)
        return view_displacement(rpg, 1546, POS.y);
    if (POS.y > 200)
        return view_displacement(rpg, POS.x, 200);
    if (POS.y < 226)
        return view_displacement(rpg, POS.x, 226);
}

void move_view(myrpg_t* rpg)
{
    sfRectangleShape_setPosition(rpg->pers->hitbox,
    (sfVector2f){POS.x - 27, POS.y - 35});
    if (POS.x < 631 && POS.y > 200 && POS.y < 873)
        return view_displacement(rpg, 631, POS.y);
    if (POS.x > 1546 && POS.y > 200 && POS.y < 873)
        return view_displacement(rpg, 1546, POS.y);
    if (POS.x > 1546 && POS.y < 200)
        return view_displacement(rpg, 1546, 200);
    if (POS.x < 631 && POS.y < 200)
        return view_displacement(rpg, 631, 200);
    if (POS.y > 873 && POS.x > 1546)
        return view_displacement(rpg, 1546, 873);
    if (POS.y > 200 && POS.y < 873)
        return view_displacement(rpg, POS.x, POS.y);
    part2(rpg);
}

void view_displacement(myrpg_t* rpg, int x, int y)
{
    sfView_move(rpg->view, (sfVector2f){0, rpg->speed});
    sfView_setCenter(rpg->view, (sfVector2f){x, y});
    return;
}
