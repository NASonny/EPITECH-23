/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** create_window
*/

#include "include/applications.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void create_application(application_t *app)
{
    app->window = sfRenderWindow_create((sfVideoMode){1920,1080,32},
        "Zombie Hunter", sfDefaultStyle, NULL);
    app->texture = sfTexture_createFromFile("assets/sht/zombies.png", NULL);
    app->sprite = sfSprite_create();
    sfSprite_setTexture(app->sprite, app->texture, sfTrue);
    sfSprite_scale(app->sprite, (sfVector2f){2, 2});
    sfSprite_setPosition(app->sprite, (sfVector2f){0.0f, 300.0f});
    app->bg = sfTexture_createFromFile("assets/bg/background_game.jpg", NULL);
    app->spritebg = sfSprite_create();
    sfSprite_setTexture(app->spritebg, app->bg, sfTrue);
    app->rect = (sfIntRect){0, 0, 39.9, 62};
    app->rect.left += 42;
    app->clock = sfClock_create();
    app->anim = sfClock_create();
}

void help(void)
{
    my_putstr("USAGE\n\n");
    my_putstr("     ./my_hunter\n\n");
    my_putstr("DESCRIPTION\n\n");
    my_putstr("     Shoot as many zombies as possible\n");
    my_putstr("     Clicking on the zombies so you can kill them\n\n");
    my_putstr("VERSION\n\n");
    my_putstr("     Version : 0.1\n");
    my_putstr("     This game is an alpha due to a lack of time\n");
    my_putstr("     Made by Sonny TEK1 EPITECH LILLE\n\n");
}
