/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** draw_game
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

void draw(application_t *app)
{
    sfRenderWindow_drawSprite(app->window, app->spritebg, NULL);
    sfRenderWindow_drawSprite(app->window, app->sprite, NULL);
}
