/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** draw_menu
*/

#include "my_rpg.h"

//function to display the menu
void display_menu (myrpg_t *rpg)
{
    sfRenderWindow_clear(rpg->window, sfBlack);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_button_help, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->title, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->play, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->settings, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->quit, NULL);
    sfRenderWindow_display(rpg->window);
}
