/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** create_texts_settings
*/

#include "my_rpg.h"

sfVector2f set_pos_text_settings(myrpg_t *rpg, int x, int y)
{
    sfVector2f pos = sfSprite_getPosition(rpg->pers->sprite);
    pos.x = x + (pos.x - 960);
    pos.y = y + (pos.y - 540);
    return pos;
}

//function to create the settings text
void create_text_settings(myrpg_t *rpg)
{
    rpg->menu->text_settings = sfText_create();
    sfText_setString(rpg->menu->text_settings, "Settings");
    sfText_setFont(rpg->menu->text_settings, rpg->menu->font);
    sfText_setColor(rpg->menu->text_settings, sfWhite);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_settings,
    set_pos_text_settings(rpg, vecteur.x / 2.2, 330));
    sfText_setCharacterSize(rpg->menu->text_settings, 50);
}

//function to create the volume text
void create_text_volume(myrpg_t *rpg)
{
    rpg->menu->text_volume = sfText_create();
    sfText_setString(rpg->menu->text_volume, "Volume");
    sfText_setFont(rpg->menu->text_volume, rpg->menu->font);
    sfText_setColor(rpg->menu->text_volume, sfWhite);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_volume,
    set_pos_text_settings(rpg, vecteur.x / 1.73, 400));
    sfText_setCharacterSize(rpg->menu->text_volume, 35);
}

//function to create the fullscreen text
void create_text_fullscreen(myrpg_t *rpg)
{
    rpg->menu->text_fullscreen = sfText_create();
    sfText_setString(rpg->menu->text_fullscreen, "Fullscreen");
    sfText_setFont(rpg->menu->text_fullscreen, rpg->menu->font);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_fullscreen,
    set_pos_text_settings(rpg, vecteur.x / 2.7, 400));
    sfText_setColor(rpg->menu->text_fullscreen, sfWhite);
    sfText_setCharacterSize(rpg->menu->text_fullscreen, 35);
}

//function to create the resolution text
void create_text_resolution(myrpg_t *rpg)
{
    rpg->menu->text_resolution = sfText_create();
    sfText_setString(rpg->menu->text_resolution, "Resolution");
    sfText_setFont(rpg->menu->text_resolution, rpg->menu->font);
    sfText_setColor(rpg->menu->text_resolution, sfWhite);
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->text_resolution,
    set_pos_text_settings(rpg, vecteur.x / 2.7, 600));
    sfText_setCharacterSize(rpg->menu->text_resolution, 35);
}
