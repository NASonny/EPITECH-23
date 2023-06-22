/*
** EPITECH PROJECT, 2023
** window
** File description:
** window creation
*/

#include "my_rpg.h"

sfRenderWindow *create_w(unsigned int x, unsigned int y,
myrpg_t* rpg, char *title)
{
    rpg->mode = (sfVideoMode){x, y, 32};
    sfRenderWindow* window = sfRenderWindow_create(rpg->mode, title,
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);

    return (window);
}

sfRenderWindow *create_w_f(unsigned int x, unsigned int y,
myrpg_t* rpg, char *title)
{
    rpg->mode = (sfVideoMode){x, y, 32};
    sfRenderWindow* window = sfRenderWindow_create(rpg->mode, title,
    sfResize | sfClose | sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);

    return (window);
}
