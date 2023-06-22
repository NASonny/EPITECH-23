/*
** EPITECH PROJECT, 2023
** MY rpg PROJECT
** File description:
** my_rpg file (init)
*/

#include "my_rpg.h"

myrpg_t *init(myrpg_t *rpg)
{
    rpg->inventory = malloc(sizeof(inventory_t));
    rpg->inventory->clock = sfClock_create();
    rpg->inventory->open = 0;
    rpg->menu = malloc(sizeof(menu_t));
    init_background(rpg);
    rpg->which_win = 0;
    rpg->frame_number = 0;
    init_fight(rpg);
    return rpg;
}

void set_icon(myrpg_t *rpg)
{
    sfImage *icon = sfImage_createFromFile("ressource/icon.png");
    sfRenderWindow_setIcon(rpg->window, 171, 170, sfImage_getPixelsPtr(icon));
}

void init_list(myrpg_t *rpg)
{
    init(rpg);
    init_character(rpg);
    init_pnj(rpg);
    create_mob(rpg);
    set_icon(rpg);
    init_card(rpg);
    init_img_collider(rpg);
    set_sound(rpg);
    init_pattern(rpg);
    init_background_iso(rpg);
    create_inventory(rpg);
    create_interact_forest(rpg);
    create_inventory(rpg);
    create_help_menu(rpg);
    create_boutique(rpg);
}

void init_function(myrpg_t *rpg)
{
    rpg->back_button = malloc(sizeof(back_button_t));
    if (rpg->back_button == NULL)
        return;
    init_list(rpg);
    rpg->music = malloc(sizeof(music_t));
    rpg->music->music = sfMusic_createFromFile("ressource/font_music.ogg");
    rpg->music->volume = 100;
    sfMusic_setLoop(rpg->music->music, sfTrue);
    sfMusic_play(rpg->music->music);
    sfSprite_setTextureRect(rpg->pers->sprite, (sfIntRect){0, 120, 70, 70});
}
