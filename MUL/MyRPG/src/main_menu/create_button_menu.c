/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** create_button_menu
*/

#include "my_rpg.h"

//create a button to go back to the main menu
void create_button_back(myrpg_t *rpg)
{
    char filename[38] = "ressource/back_button/back01.png";
    for (int i = 0; i < NUM_BACKBUTTON; i++) {
        rpg->back_button->frames[i] = sfTexture_createFromFile(filename, NULL);
        filename[27] += 1;
    }
    rpg->back_button->sprite = sfSprite_create();
    sfSprite_setTexture(rpg->back_button->sprite,
    rpg->back_button->frames[0], sfTrue);
    sfSprite_scale(rpg->back_button->sprite,
    (sfVector2f){0.50, 0.50});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->back_button->sprite,
    set_pos_text_settings(rpg, vecteur.x / 3.4, 315));
    rpg->back_button->clock = sfClock_create();
    rpg->back_button->elapsed_time = 0.0;
}

void create_help_button(myrpg_t *rpg)
{
    char filename[38] = "ressource/help_button/help01.png";
    for (int i = 0; i < NUM_HELPBUTTON; i++) {
        rpg->menu->frame[i] = sfTexture_createFromFile(filename, NULL);
        filename[27] += 1;
    }
    rpg->menu->sprite_button_help = sfSprite_create();
    sfSprite_setTexture(rpg->menu->sprite_button_help,
    rpg->menu->frame[0], sfTrue);
    sfSprite_scale(rpg->menu->sprite_button_help, (sfVector2f){0.50, 0.50});
    sfVector2u vecteur = sfRenderWindow_getSize(rpg->window);
    sfSprite_setPosition(rpg->menu->sprite_button_help,
    (sfVector2f){vecteur.x / 3.4, 725});
    rpg->menu->clock_h = sfClock_create();
    rpg->menu->elapsed_time_h = 0.0;
}

void touch_back_button(myrpg_t *rpg, sfEvent event)
{
    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        if (event.mouseButton.x >= 11 && event.mouseButton.x <= 180 &&
        event.mouseButton.y >= 5 && event.mouseButton.y <= 75) {
            rpg->which_win = rpg->last_win;
            main_loop(rpg->window, event, rpg);
        }
    }
}
