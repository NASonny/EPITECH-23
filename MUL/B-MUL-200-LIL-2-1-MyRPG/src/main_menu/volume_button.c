/*
** EPITECH PROJECT, 2023
** RPG
** File description:
** volume_button
*/

#include "my_rpg.h"

//function to create the volume button
void create_volumeoff_button(myrpg_t *rpg)
{
    rpg->menu->volumeoff_button = sfTexture_createFromFile
    ("ressource/music_off.png", NULL);
    rpg->menu->sprite_volumeoff_button = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_volumeoff_button,
    rpg->menu->volumeoff_button, sfTrue);
    sfSprite_scale(rpg->menu->sprite_volumeoff_button, (sfVector2f){0.3, 0.3});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_volumeoff_button,
    set_pos_text_settings(rpg, vecteur.x / 1.6, 475));
}

void create_volumeon_button(myrpg_t *rpg)
{
    rpg->menu->volumeon_button = sfTexture_createFromFile
    ("ressource/music_on.png", NULL);
    rpg->menu->sprite_volumeon_button = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_volumeon_button,
    rpg->menu->volumeon_button, sfTrue);
    sfSprite_scale(rpg->menu->sprite_volumeon_button, (sfVector2f){0.3, 0.3});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_volumeon_button,
    set_pos_text_settings(rpg, vecteur.x / 1.8, 475));
}

void create_volume_up_button(myrpg_t *rpg)
{
    rpg->menu->volumeup_button = sfTexture_createFromFile
    ("ressource/button_plus.png", NULL);
    rpg->menu->sprite_volumeup_button = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_volumeup_button,
    rpg->menu->volumeup_button, sfTrue);
    sfSprite_scale(rpg->menu->sprite_volumeup_button, (sfVector2f){0.5, 0.5});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_volumeup_button,
    set_pos_text_settings(rpg, vecteur.x / 1.79, 575));

}

void create_volume_down_button(myrpg_t *rpg)
{
    rpg->menu->volumedown_button = sfTexture_createFromFile
    ("ressource/button_minus.png", NULL);
    rpg->menu->sprite_volumedown_button = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_volumedown_button,
    rpg->menu->volumedown_button, sfTrue);
    sfSprite_scale(rpg->menu->sprite_volumedown_button, (sfVector2f){0.5, 0.5});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_volumedown_button,
    set_pos_text_settings(rpg, vecteur.x / 1.58, 575));
}
