/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** draw_game
*/

#include "include/applications.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void draw(application_t *app)
{
    sfRenderWindow_drawSprite(app->window, app->spritebg, NULL);
    sfRenderWindow_drawSprite(app->window, app->sprite, NULL);
}
