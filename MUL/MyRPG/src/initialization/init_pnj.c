/*
** EPITECH PROJECT, 2023
** My_RPG - init_pnj.c
** File description:
** initialization of the pnj
*/

#include "my_rpg.h"

myrpg_t *init_pnj(myrpg_t *rpg)
{
    rpg->pnj = malloc(sizeof(sprite_t));
    if (rpg->pnj == NULL)
        return NULL;
    rpg->pnj->sprite = sfSprite_create();
    rpg->pnj->scale = (sfVector2f){0.65, 0.65};
    rpg->pnj->pos = (sfVector2f){783, 380};
    rpg->pnj->text = sfTexture_createFromFile("ressource/ewan.png", NULL);
    rpg->pnj->hitbox = sfRectangleShape_create();

    return rpg;
}
