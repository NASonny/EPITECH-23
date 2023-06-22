/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** destroy_app
*/

#include "include/applications.h"


void destroy_application(application_t *app, button_t *button,
button_e *buttone, menu_bar *menu)
{
    sfRectangleShape_destroy(button->rect);
    sfRectangleShape_destroy(buttone->recte);
    sfText_destroy(menu->fileMenu);
    sfText_destroy(menu->helpMenu);
    sfRenderWindow_destroy(app->window);
}
