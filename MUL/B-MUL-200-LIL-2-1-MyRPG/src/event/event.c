/*
** EPITECH PROJECT, 2023
** event part
** File description:
** code event
*/

#include "my_rpg.h"

void event_part(sfRenderWindow *window, sfEvent event, myrpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp))
        rpg->speed += 3;
    if (sfKeyboard_isKeyPressed(sfKeyDown))
        rpg->speed -= 3;
    if (rpg->speed <= 0)
        rpg->speed = 1;
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    event_forest(rpg);
    event_keypressed_displacement(rpg);
}
