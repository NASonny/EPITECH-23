/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** help.c
*/

#include "my_rpg.h"

void display_help(myrpg_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->help->sprite, NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->back_button->sprite,
    NULL);
    sfRenderWindow_display(rpg->window);
}

void check_button_help(myrpg_t *rpg, sfEvent event)
{
    rpg->menu->pos = sfMouse_getPositionRenderWindow(rpg->window);
    if (rpg->menu->pos.x > 17 && rpg->menu->pos.x < 169
        && rpg->menu->pos.y > 915 && rpg->menu->pos.y < 963) {
        if (sfRenderWindow_pollEvent(rpg->window, &event) && event.type
        == sfEvtMouseButtonPressed) {
            sfSound_play(rpg->sound->sound);
            rpg->which_win = 3;
            view_gestion(rpg);
        }
    }
}

void create_help_menu(myrpg_t *rpg)
{
    rpg->help = malloc(sizeof(sprite_t));
    rpg->back_button = malloc(sizeof(back_button_t));
    rpg->help->text = sfTexture_createFromFile("ressource/help.png", NULL);
    rpg->back_button->button_back = sfTexture_createFromFile
    ("ressource/back_button/back01.png", NULL);
    rpg->help->sprite = sfSprite_create();
    rpg->back_button->sprite = sfSprite_create();
    sfSprite_setTexture(rpg->help->sprite, rpg->help->text, sfTrue);
    sfSprite_setTexture(rpg->back_button->sprite,
    rpg->back_button->button_back, sfTrue);
    rpg->help->pos = (sfVector2f){710, 310};
    rpg->help->scale = (sfVector2f){1, 1};
    rpg->back_button->pos = (sfVector2f){564, 315};
    rpg->back_button->scale = (sfVector2f){0.5, 0.5};
    sfSprite_setPosition(rpg->help->sprite, rpg->help->pos);
    sfSprite_setScale(rpg->help->sprite, rpg->help->scale);
    sfSprite_setPosition(rpg->back_button->sprite, rpg->back_button->pos);
    sfSprite_setScale(rpg->back_button->sprite, rpg->back_button->scale);
}
