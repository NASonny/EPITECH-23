/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "include/applications.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

sfVector2f if_pos(application_t *app, sfVector2f position, int n)
{
    sfEvent event;
    sfRenderWindow_pollEvent(app->window, &event);
    app->event = event;
    if (position.x >= 1920){
        position.y = n;
        sfSprite_setPosition(app->sprite, (sfVector2f){0.0f, position.y});
        position = sfSprite_getPosition(app->sprite);
    }
    if (sfFloatRect_contains(&app->floatrect, app->posmouse.x, app->posmouse.y)
        && app->event.type == sfEvtMouseButtonPressed){
        position.y = n;
        sfSprite_setPosition(app->sprite, (sfVector2f){0.0f, position.y});
        position = sfSprite_getPosition(app->sprite);
    }
    return position;
}

void update (application_t *app, float delta)
{
    sfVector2f position = position = sfSprite_getPosition(app->sprite);

    position.x += 700 * delta;
    int n = rand() % 500 + 250;
    position = if_pos(app, position, n);
    sfSprite_setTexture(app->sprite, app->texture, sfTrue);
    sfSprite_setTextureRect(app->sprite, app->rect);
    app->time = sfClock_getElapsedTime(app->anim);
    app->seconds = app->time.microseconds / 80000.0;
    if (app->seconds > 1){
        if (app->rect.left < 350)
            app->rect.left += 42;
        else
            app->rect.left = 0;
        sfClock_restart(app->anim);
    }
    sfSprite_setPosition(app->sprite, position);
}

void handle_events(application_t *app)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(app->window, &event)){
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(app->window);
            }
}

int main(int argc, char **argv, char **env)
{
    if (argc == 2){
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            help();
            return (0);
            }
    }
    application_t app;
    create_application(&app);
    run_application(&app);
    if (!sfRenderWindow_isOpen((&app)->window))
        return 0;
    destroy_application(&app);
}
