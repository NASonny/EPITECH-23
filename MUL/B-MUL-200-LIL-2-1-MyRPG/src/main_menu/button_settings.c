/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** button_settings
*/


#include "my_rpg.h"


//function to create the button yes in the settings menu
void create_button_yes(myrpg_t *rpg)
{
    rpg->menu->button_yes = sfTexture_createFromFile("ressource/yes.png", NULL);
    rpg->menu->sprite_button_yes = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_button_yes,
    rpg->menu->button_yes, sfTrue);
    sfSprite_scale(rpg->menu->sprite_button_yes, (sfVector2f){0.1, 0.1});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_button_yes,
    set_pos_text_settings(rpg, vecteur.x / 2.8, 475));
}

void create_button_no(myrpg_t *rpg)
{
    rpg->menu->button_no = sfTexture_createFromFile("ressource/no.png", NULL);
    rpg->menu->sprite_button_no = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_button_no,
    rpg->menu->button_no, sfTrue);
    sfSprite_scale(rpg->menu->sprite_button_no, (sfVector2f){0.1, 0.1});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_button_no,
    set_pos_text_settings(rpg, vecteur.x / 2.4, 475));
}
