/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** destroy_menu
*/

#include "my_rpg.h"

//function to destroy the menu
void destroy_menu (myrpg_t *rpg)
{
    for (int i = 0; i < NUM_FRAMES; i++)
        sfTexture_destroy(rpg->menu->frames[i]);
    for (int i = 0; i < NUM_HELPBUTTON; i++)
        sfTexture_destroy(rpg->menu->frame[i]);
    sfText_destroy(rpg->menu->title);
    sfText_destroy(rpg->menu->play);
    sfText_destroy(rpg->menu->settings);
    sfText_destroy(rpg->menu->quit);
    sfFont_destroy(rpg->menu->font);
    sfMusic_destroy(rpg->menu->music);
    sfSprite_destroy(rpg->menu->sprite_button_help);
    sfSprite_destroy(rpg->menu->sprite);
    sfTexture_destroy(rpg->menu->button_help);
    sfClock_destroy(rpg->menu->clock_h);
    sfClock_destroy(rpg->menu->clock);
    free(rpg->back_button);
    free(rpg->menu);
}
