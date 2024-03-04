/*
** EPITECH PROJECT, 2023
** draw bubble
** File description:
** display the dialogue bubble
*/

#include "my_rpg.h"

void display_bubble(myrpg_t* rpg, sfVector2f scale)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("ressource/bubble.png", 0);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, (sfVector2f){782, 350});
    sfSprite_setScale(sprite, scale);
    sfRenderWindow_drawSprite(rpg->window, sprite, NULL);
}
