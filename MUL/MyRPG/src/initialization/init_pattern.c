/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** init_pattern.c
*/


#include "my_rpg.h"

void init_boutique(myrpg_t *rpg)
{
    rpg->boutique = malloc(sizeof(boutique_t));
    rpg->boutique->boutique =
    sfTexture_createFromFile("ressource/boutique/boutique.png", NULL);
    rpg->boutique->sprite_boutique = sfSprite_create();
    rpg->boutique->pos = (sfVector2f){785, 542};
    rpg->boutique->scale = (sfVector2f){1.0, 1.0};
}

void init_fight(myrpg_t *rpg)
{
    rpg->fight = malloc(sizeof(sprite_t));
    rpg->fight->text = sfTexture_createFromFile("ressource/sword.png", NULL);
    rpg->fight->sprite = sfSprite_create();
    rpg->fight->pos = (sfVector2f){1510, 430};
    rpg->fight->scale = (sfVector2f){0.1, 0.1};
    sfSprite_setRotation(rpg->fight->sprite, 45);
    sfSprite_setPosition(rpg->fight->sprite, rpg->fight->pos);
    sfSprite_setTexture(rpg->fight->sprite, rpg->fight->text, sfTrue);
    sfSprite_setScale(rpg->fight->sprite, rpg->fight->scale);
}

void init_background_iso(myrpg_t *rpg)
{
    rpg->background_iso = malloc(sizeof(sprite_t));
    rpg->background_iso->text =
    sfTexture_createFromFile("ressource/map/map_iso.png", NULL);
    rpg->background_iso->sprite = sfSprite_create();
    rpg->background_iso->pos = (sfVector2f){-120, -530};
    rpg->background_iso->scale = (sfVector2f){1.0, 1.0};
    sfSprite_setTexture(rpg->background_iso->sprite,
    rpg->background_iso->text, sfTrue);
    sfSprite_setPosition(rpg->background_iso->sprite,
    rpg->background_iso->pos);
    sfSprite_setScale(rpg->background_iso->sprite,
    rpg->background_iso->scale);
}

void init_pattern(myrpg_t *rpg)
{
    sf_sprite_pattern(rpg->background->sprite, rpg->background->text,
    rpg->background->pos, rpg->background->scale);
    sf_sprite_pattern(rpg->pers->sprite, rpg->pers->text, rpg->pers->pos,
    rpg->pers->scale);
    sf_sprite_pattern(rpg->pnj->sprite, rpg->pnj->text, rpg->pnj->pos,
    rpg->pnj->scale);
    sf_rectangle_shape_pattern(rpg->pers->hitbox, rpg->pers->pos,
    (sfVector2f) {100.f, 100.f});
    sf_rectangle_shape_pattern(rpg->pnj->hitbox, rpg->pnj->pos,
    (sfVector2f) {100.f, 100.f});
}
