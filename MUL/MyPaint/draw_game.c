/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** draw_game
*/

#include "include/applications.h"

struct button_s * init_button (button_t *button)
{
    button->rect = sfRectangleShape_create();
    button->position = (sfVector2f){10.f, 0.f};
    button->size = (sfVector2f){150.f, 40.f};
    sfColor color = sfColor_fromRGB(211, 211, 211);
    sfRectangleShape_setPosition(button->rect, button->position);
    sfRectangleShape_setSize(button->rect, button->size);
    sfRectangleShape_setFillColor(button->rect, color);
}

struct button_e * eraser_button (button_e *buttone)
{
    buttone->recte = sfRectangleShape_create();
    buttone->position = (sfVector2f){175.f, 0.f};
    buttone->size = (sfVector2f){150.f, 40.f};
    sfColor color = sfColor_fromRGB(211, 211, 211);
    sfRectangleShape_setPosition(buttone->recte, buttone->position);
    sfRectangleShape_setSize(buttone->recte, buttone->size);
    sfRectangleShape_setFillColor(buttone->recte, color);
}

void draw(application_t *app, button_t *button,
button_e *buttone, menu_bar *menu)
{
    sfRenderWindow_drawRectangleShape(app->window, button->rect, 0);
    sfRenderWindow_drawRectangleShape(app->window, buttone->recte, 0);
    sfRenderWindow_drawText(app->window, menu->fileMenu, NULL);
    sfRenderWindow_drawText(app->window, menu->helpMenu, NULL);
}
