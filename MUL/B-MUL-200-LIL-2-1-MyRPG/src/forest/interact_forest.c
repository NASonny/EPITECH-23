/*
** EPITECH PROJECT, 2023
** interact c
** File description:
** sfKeyE on forest
*/

#include "my_rpg.h"

void create_interact_forest(myrpg_t *rpg)
{
    rpg->interact_forest = malloc(sizeof(sprite_t));
    rpg->interact_forest->pos = (sfVector2f){1250, 400};
    rpg->interact_forest->hitbox = sfRectangleShape_create();
    sf_rectangle_shape_pattern(rpg->interact_forest->hitbox,
    rpg->interact_forest->pos, (sfVector2f){170, 50});
}
