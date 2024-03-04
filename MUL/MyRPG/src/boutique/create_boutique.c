/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** create_boutique.c
*/

#include "my_rpg.h"

void create_boutique(myrpg_t *rpg)
{
    rpg->boutique = malloc(sizeof(boutique_t));
    rpg->boutique->boutique = sfTexture_createFromFile(
    "ressource/boutique/boutique.png", NULL);
    rpg->boutique->sprite_boutique = sfSprite_create();
    sfSprite_setTexture(rpg->boutique->sprite_boutique,
    rpg->boutique->boutique, sfTrue);
    rpg->boutique->pos = (sfVector2f){rpg->pers->pos.x - 110, rpg->pers->pos.y
    - 180};
    rpg->boutique->scale = (sfVector2f){0.35, 0.35};
    sfSprite_setPosition(rpg->boutique->sprite_boutique, rpg->boutique->pos);
    sfSprite_setScale(rpg->boutique->sprite_boutique, rpg->boutique->scale);
    rpg->boutique->open = 0;
    rpg->boutique->clock = sfClock_create();
}

void event_open_boutique(myrpg_t *rpg)
{
    if (rpg->boutique->open == 0) {
        rpg->boutique->open = 1;
    } else {
        rpg->boutique->open = 0;
    }
}

void event_boutique(myrpg_t *rpg)
{
    rpg->boutique->time = sfClock_getElapsedTime(rpg->boutique->clock);

    if (sfKeyboard_isKeyPressed(sfKeyB)) {
        rpg->boutique->seconds = rpg->boutique->time.microseconds / 1000000.0;

        if (rpg->boutique->seconds >= 1) {
            event_open_boutique(rpg);
            sfClock_restart(rpg->boutique->clock);
        }
    }
}

void display_boutique(myrpg_t *rpg)
{
    if (!rpg || !rpg->boutique)
        return;
    if (rpg->boutique->open == 1) {
        sfSprite_setPosition(rpg->boutique->sprite_boutique,
        (sfVector2f){POS.x - 110, POS.y - 180});
        sfRenderWindow_drawSprite(rpg->window, rpg->boutique->sprite_boutique,
        NULL);
    }
}
