/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** destroy_app
*/

#include "include/applications.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void destroy_application(application_t *app)
{
    sfSprite_destroy(app->sprite);
    sfTexture_destroy(app->texture);
    sfClock_destroy(app->clock);
    sfClock_destroy(app->anim);
    sfRenderWindow_destroy(app->window);
}
