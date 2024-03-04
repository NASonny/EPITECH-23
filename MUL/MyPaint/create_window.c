/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** create_window
*/

#include "include/applications.h"

void create_application(application_t *app)
{
    app->window = sfRenderWindow_create((sfVideoMode){1920,1080,32},
        "Pain(t)", sfDefaultStyle, NULL);
    sfRenderWindow_clear(app->window, sfWhite);
}

void help(void)
{
    my_putstr("USAGE\n\n");
    my_putstr("     ./mypaint\n\n");
    my_putstr("DESCRIPTION\n\n");
    my_putstr("     Click on the pencil to draw\n");
    my_putstr("     Click on the eraser to erase the pixel what you draw\n\n");
    my_putstr("VERSION\n\n");
    my_putstr("     Version : 0.1\n");
    my_putstr("     This software not working due to a lack of time\n");
    my_putstr("     Made by Sonny TEK1 EPITECH LILLE\n\n");
}
