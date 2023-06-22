/*
** EPITECH PROJECT, 2023
** My_RPG - init_background.c
** File description:
** initialization of the background
*/

#include "my_rpg.h"

myrpg_t* init_background(myrpg_t *rpg)
{
    rpg->background = malloc(sizeof(sprite_t));
    if (rpg->background == NULL)
        return NULL;
    rpg->background->sprite = sfSprite_create();
    rpg->background->text = sfTexture_createFromFile("ressource/map/m.png",
    NULL);
    rpg->background->scale = (sfVector2f){1.0, 1.0};
    rpg->background->pos = (sfVector2f){-120, -530};
    rpg->background->hitbox = sfRectangleShape_create();

    return rpg;
}
