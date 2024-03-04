/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** set_drawing_settings
*/

#include "my_rpg.h"

void drawing_sprite(myrpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->back_button->sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_volumeoff_button,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_volumeon_button,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_volumedown_button,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_volumeup_button,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_button_yes, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_button_no, NULL);
    sfText_setPosition(rpg->menu->quit,
    set_pos_text_settings(rpg, 1920 / 1.7, 680));
    sfRenderWindow_drawText(rpg->window, rpg->menu->quit, NULL);
    sfText_setPosition(rpg->menu->quit, (sfVector2f){1920 / 2.1, 660});
}

void drawing_text(myrpg_t *rpg)
{
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_settings, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_volume, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_fullscreen, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_resolution, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_resolution_1920x1080,
    NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->text_resolution_1600x900,
    NULL);
}
