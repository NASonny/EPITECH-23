/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** run_app
*/

#include "include/applications.h"


void run_application(application_t *app, button_t *button,
button_e *buttone, menu_bar *menu)
{
    float delta;

    while (sfRenderWindow_isOpen(app->window)) {
        app->posmouse = sfMouse_getPositionRenderWindow(app->window);

        sfRenderWindow_clear(app->window, sfWhite);
        draw(app, button, buttone, menu);
        sfRenderWindow_display(app->window);

        handle_events(app);
        }
}
