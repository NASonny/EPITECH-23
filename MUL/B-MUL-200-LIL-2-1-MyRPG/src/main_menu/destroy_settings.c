/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** draw&destroy_settings
*/

#include "my_rpg.h"

void destroy_settings_menu(myrpg_t *rpg)
{
    sfText_destroy(rpg->menu->text_settings);
    sfText_destroy(rpg->menu->text_volume);
    sfTexture_destroy(rpg->back_button->button_back);
    sfSprite_destroy(rpg->back_button->sprite);
    sfText_destroy(rpg->menu->text_fullscreen);
    sfText_destroy(rpg->menu->text_resolution);
    sfSprite_destroy(rpg->menu->sprite);
    sfClock_destroy(rpg->menu->clock);
}
