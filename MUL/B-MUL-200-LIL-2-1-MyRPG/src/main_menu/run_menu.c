/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** run_menu
*/

#include "my_rpg.h"

void main_menu(myrpg_t *rpg)
{
    create_background(rpg);
    create_texts(rpg);
    create_help_button(rpg);
}

void rend_texts(myrpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->menu->sprite_button_help, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->title, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->play, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->settings, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->menu->quit, NULL);
}
