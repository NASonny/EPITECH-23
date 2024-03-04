/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** resolution_settings
*/

#include "my_rpg.h"

//create text resolution 1920x1080
void create_text_resolution_1920x1080(myrpg_t *rpg)
{
    rpg->menu->text_resolution_1920x1080 = sfText_create();
    sfText_setString(rpg->menu->text_resolution_1920x1080, "1920 x 1080");
    sfText_setFont(rpg->menu->text_resolution_1920x1080, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->text_resolution_1920x1080, 25);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_resolution_1920x1080,
    set_pos_text_settings(rpg, vecteur.x / 2.6, 650));
}

void create_text_resolution_1600x900(myrpg_t *rpg)
{
    rpg->menu->text_resolution_1600x900 = sfText_create();
    sfText_setString(rpg->menu->text_resolution_1600x900, "1024 x 768");
    sfText_setFont(rpg->menu->text_resolution_1600x900, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->text_resolution_1600x900, 25);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_resolution_1600x900,
    set_pos_text_settings(rpg, vecteur.x / 2.6, 700));
}
