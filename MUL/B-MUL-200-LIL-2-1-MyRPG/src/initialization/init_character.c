/*
** EPITECH PROJECT, 2023
** My_RPG - init_character.c
** File description:
** initialization of the main character
*/

#include "my_rpg.h"

void init_c_carac(myrpg_t *rpg)
{
    rpg->pers->cooldown_atk = malloc(sizeof(cooldown_t));
    if (!rpg->pers->cooldown_atk)
        return;
    rpg->pers->pv = 100;
    rpg->pers->mana = 100;
    rpg->pers->strength = 10;
    rpg->pers->level = 0;
    rpg->pers->xp = 0;
    rpg->pers->gold = 0;
    rpg->pers->cooldown_atk->cooldow_atk = sfClock_create();
    rpg->pers->frame_number = 8;
    rpg->speed = 2;
}

myrpg_t *init_character(myrpg_t *rpg)
{
    rpg->pers = malloc(sizeof(player_t));
    if (rpg->pers == NULL)
        return NULL;
    rpg->pers->sprite = sfSprite_create();
    rpg->pers->scale = (sfVector2f){0.7, 0.7};
    rpg->pers->pos = (sfVector2f){960, 540};
    rpg->pers->text = sfTexture_createFromFile("ressource/skeleton.png", NULL);
    sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
    rpg->pers->hitbox = sfRectangleShape_create();
    rpg->pers->clock = sfClock_create();
    init_c_carac(rpg);
    return rpg;
}
