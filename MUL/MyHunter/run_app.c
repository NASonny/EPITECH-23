/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** run_app
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


void run_application(application_t *app)
{
    sfClock *clock = sfClock_create();
    float delta;

    while (sfRenderWindow_isOpen(app->window)) {
        delta = sfTime_asSeconds(sfClock_restart(clock));
        app->posmouse = sfMouse_getPositionRenderWindow(app->window);
        app->floatrect = sfSprite_getGlobalBounds(app->sprite);

        update(app, delta);

        sfRenderWindow_clear(app->window, sfBlack);
        draw(app);
        sfRenderWindow_display(app->window);

        handle_events(app);
        }
    sfClock_destroy(clock);
}
