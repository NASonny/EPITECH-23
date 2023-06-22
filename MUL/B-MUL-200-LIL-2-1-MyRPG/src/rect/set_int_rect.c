/*
** EPITECH PROJECT, 2023
** set int rect
** File description:
** rectangle shape to int rect
*/

#include "my_rpg.h"

sfIntRect set_rect(sfRectangleShape *RectangleShape)
{
    sfFloatRect rectBounds = sfRectangleShape_getGlobalBounds(RectangleShape);
    sfIntRect intRect = {
        (int)rectBounds.left,
        (int)rectBounds.top,
        (int)rectBounds.width,
        (int)rectBounds.height
    };

    return intRect;
}
