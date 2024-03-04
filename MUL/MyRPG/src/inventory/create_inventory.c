/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** create_inventory
*/

#include "my_rpg.h"

void create_inventory(myrpg_t *rpg)
{
    rpg->inventory->inventory =
    sfTexture_createFromFile("ressource/inventory.png", NULL);
    rpg->inventory->sprite_inventory = sfSprite_create();
    sfSprite_setTexture(rpg->inventory->sprite_inventory,
    rpg->inventory->inventory, sfTrue);
    sfSprite_scale(rpg->inventory->sprite_inventory, (sfVector2f){0.2, 0.2});
    sfSprite_setPosition(rpg->inventory->sprite_inventory,
    (sfVector2f){rpg->pers->pos.x - 30, rpg->pers->pos.y - 50});
}

void event_open_inventory(myrpg_t *rpg)
{
    if (rpg->inventory->open == 0) {
        rpg->inventory->open = 1;
    } else {
        rpg->inventory->open = 0;
    }
}

void event_inventory(myrpg_t *rpg)
{
    rpg->inventory->time = sfClock_getElapsedTime(rpg->inventory->clock);

    if (sfKeyboard_isKeyPressed(sfKeyI)) {
        rpg->inventory->seconds = rpg->inventory->time.microseconds / 1000000.0;

        if (rpg->inventory->seconds >= 1) {
            event_open_inventory(rpg);
            sfClock_restart(rpg->inventory->clock);
        }
    }
}

void display_inventory(myrpg_t *rpg)
{
    if (!rpg || !rpg->inventory)
        return;
    if (rpg->inventory->open == 1) {
        sfSprite_setPosition(rpg->inventory->sprite_inventory,
        (sfVector2f){POS.x - 30, POS.y + 70});
        sfRenderWindow_drawSprite(rpg->window, rpg->inventory->sprite_inventory,
        NULL);
    }
}
