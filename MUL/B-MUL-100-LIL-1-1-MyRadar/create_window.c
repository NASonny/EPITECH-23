/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** create_window
*/

#include "include/applications.h"
#include <stdarg.h>
#include "SFML/Audio.h"
#include "SFML/Graphics.h"
#include "SFML/System.h"
#include "SFML/Window.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void create_application(application_t *app)
{
    int n = rand() % 1080;
    app->window = sfRenderWindow_create((sfVideoMode){1920,1080,32},
        "Europa Radar", sfDefaultStyle, NULL);
    app->texture = sfTexture_createFromFile("assets/sht/plane.png", NULL);
    app->sprite = sfSprite_create();
    sfSprite_setTexture(app->sprite, app->texture, sfTrue);
    sfSprite_scale(app->sprite, (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(app->sprite, (sfVector2f){0.0f, n});
    app->texture2 = sfTexture_createFromFile("assets/sht/tower.png", NULL);
    app->sprite2 = sfSprite_create();
    sfSprite_setTexture(app->sprite2, app->texture2, sfTrue);
    sfSprite_scale(app->sprite2, (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(app->sprite2, (sfVector2f){560.0f, 600.0f});
    app->bg = sfTexture_createFromFile("assets/bg/map_scroll.jpeg", NULL);
    app->spritebg = sfSprite_create();
    sfSprite_setTexture(app->spritebg, app->bg, sfTrue);
}

void help(void)
{
    my_putstr("Air traffic simulation panel\n\n");
    my_putstr("USAGE\n");
    my_putstr(" ./my_radar [OPTIONS] path_to_script\n");
    my_putstr(" path_to_script The path to the script file.\n\n");
    my_putstr("OPTIONS\n");
    my_putstr(" -h            print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr(" ‘L’ key enable/disable hitboxes and areas.\n");
    my_putstr(" ‘S’ key enable/disable sprites\n\n");
}
