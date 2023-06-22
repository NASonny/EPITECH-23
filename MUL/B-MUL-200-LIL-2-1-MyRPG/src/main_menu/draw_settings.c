/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** draw&destroy_settings
*/

#include "my_rpg.h"

//function to create the menu draw
void draw_settings_menu(myrpg_t *rpg)
{
    drawing_sprite(rpg);
    drawing_text(rpg);
    sfRenderWindow_display(rpg->window);
}
