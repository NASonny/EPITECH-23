/*
** EPITECH PROJECT, 2023
** event forest
** File description:
** handle events for forest part
*/

#include "my_rpg.h"

void new_window(void)
{
    return;
}

void event_forest(myrpg_t *rpg)
{
    rpg->pers->int_r = set_rect(rpg->pers->hitbox);
    rpg->interact_forest->int_r = set_rect(rpg->interact_forest->hitbox);

    if (sfIntRect_intersects(&rpg->pers->int_r, &rpg->interact_forest->int_r,
    NULL) == sfTrue) {
        rpg->draw = 9;
        if (sfKeyboard_isKeyPressed(sfKeyE) == sfTrue)
            new_window();
    }
}
