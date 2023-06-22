/*
** EPITECH PROJECT, 2023
** sf_pattern
** File description:
** for sprite, and others...
*/

#include "my_rpg.h"

void sf_sprite_pattern(sfSprite *sprite, sfTexture *text, sfVector2f pos,
    sfVector2f scale)
{
    sfSprite_setTexture(sprite, text, sfTrue);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
}

void sf_rectangle_shape_pattern(sfRectangleShape *hitbox, sfVector2f pos,
sfVector2f size)
{
    sfRectangleShape_setSize(hitbox, size);
    sfRectangleShape_setPosition(hitbox,
    (sfVector2f){pos.x - (size.x / 2.9) , pos.y - (size.y / 2.9)});
    sfRectangleShape_setFillColor(hitbox, sfTransparent);
    sfRectangleShape_setOutlineColor(hitbox, sfTransparent          );
    sfRectangleShape_setOutlineThickness(hitbox, 3);
}
