/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** setting_click.c
*/

#include "my_rpg.h"

void quit_click(myrpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (mouse.x >= 1370 && mouse.x <= 1537 && mouse.y >= 828
    && mouse.y <= 888) {
        sfRenderWindow_close(rpg->window);
    }
}

void volume_click(myrpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (mouse.x >= 1230 && mouse.x <= 1290 && mouse.y >= 575
    && mouse.y <= 630) {
        if (rpg->music->volume <= 95)
            rpg->music->volume += 5;
        sfMusic_setVolume(rpg->music->music, rpg->music->volume);
    }
    if (mouse.x >= 1570 && mouse.x <= 1630 && mouse.y >= 575 &&
    mouse.y <= 630) {
        if (rpg->music->volume >= 5)
            rpg->music->volume -= 5;
        sfMusic_setVolume(rpg->music->music, rpg->music->volume);
    }
}
