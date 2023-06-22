/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** create_menu
*/

#include "my_rpg.h"

void create_background (myrpg_t *rpg)
{
    char filename[28] = "ressource/frames/frame0.png";
    sfVector2f scale = {0.42, 0.42};
    for (int i = 0; i < NUM_FRAMES; i++) {
        rpg->menu->frames[i] = sfTexture_createFromFile(filename, NULL);
        filename[22] += 1;
    }
    rpg->menu->sprite = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite, rpg->menu->frames[0], sfTrue);
    rpg->menu->position = set_pos_text_settings(rpg, 0, 0);
    sfSprite_setScale(rpg->menu->sprite, scale);
    rpg->menu->position = set_pos_text_settings(rpg, 560, 315);
    sfSprite_setPosition(rpg->menu->sprite, rpg->menu->position);
    rpg->menu->clock = sfClock_create();
    rpg->menu->elapsed_time = 0.0;
}

//function to animate the background
void animate_background (myrpg_t *rpg)
{
    rpg->menu->elapsed_time += sfTime_asSeconds(
    sfClock_restart(rpg->menu->clock));
    int frame_index = ((int)
    (rpg->menu->elapsed_time / FRAME_DELAY)) % NUM_FRAMES;
    sfSprite_setTexture(rpg->menu->sprite, rpg->menu->frames[frame_index],
    sfTrue);
}
