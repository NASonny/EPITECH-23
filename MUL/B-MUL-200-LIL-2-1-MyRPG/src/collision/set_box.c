/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** set_box.c
*/

#include "my_rpg.h"

void create_box(myrpg_t *rpg, sfVector2f pos, sfVector2f size)
{
    rpg->collide->hitbox = malloc(sizeof(hitbox_t));
    rpg->collide->hitbox->hitbox = sfRectangleShape_create();
    rpg->collide->hitbox->pos = pos;
    sfRectangleShape_setPosition(rpg->collide->hitbox->hitbox, pos);
    sfRectangleShape_setSize(rpg->collide->hitbox->hitbox, size);
    sfRectangleShape_setFillColor(rpg->collide->hitbox->hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(rpg->collide->hitbox->hitbox, sfRed);
    sfRectangleShape_setOutlineThickness(rpg->collide->hitbox->hitbox, 2);
}
