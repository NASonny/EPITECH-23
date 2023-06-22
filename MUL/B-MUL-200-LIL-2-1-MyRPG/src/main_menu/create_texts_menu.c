/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** create_texts_menu
*/

#include "my_rpg.h"

//function to create the texts of the menu
void create_title (myrpg_t *rpg)
{
    rpg->menu->title = sfText_create();
    sfText_setFont(rpg->menu->title, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->title, 120);
    sfText_setString(rpg->menu->title, "Ederia");
    sfVector2u vct = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->title, (sfVector2f){vct.x / 2.41, 330});
    sfText_setColor(rpg->menu->title, sfWhite);
    sfText_setOutlineThickness(rpg->menu->title, 2);
    sfText_setOutlineColor(rpg->menu->title, sfBlack);
}

void create_play (myrpg_t *rpg)
{
    rpg->menu->play = sfText_create();
    sfText_setFont(rpg->menu->play, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->play, 40);
    sfText_setString(rpg->menu->play, "Play");
    sfVector2u v = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->play, (sfVector2f){v.x / 2.1, 510});
    sfText_setColor(rpg->menu->play, sfWhite);
    sfText_setOutlineThickness(rpg->menu->play, 1.2);
    sfText_setOutlineColor(rpg->menu->title, sfBlack);
}

void create_settings (myrpg_t *rpg)
{
    rpg->menu->settings = sfText_create();
    sfText_setFont(rpg->menu->settings, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->settings, 40);
    sfText_setString(rpg->menu->settings, "Settings");
    sfVector2u vect_ = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->settings, (sfVector2f){vect_.x / 2.16, 580});
    sfText_setColor(rpg->menu->settings, sfWhite);
    sfText_setOutlineThickness(rpg->menu->settings, 1.2);
    sfText_setOutlineColor(rpg->menu->title, sfBlack);
}

void create_quit (myrpg_t *rpg)
{
    rpg->menu->quit = sfText_create();
    sfText_setString(rpg->menu->quit, "Quit");
    sfText_setFont(rpg->menu->quit, rpg->menu->font);
    sfText_setCharacterSize(rpg->menu->quit, 40);
    sfVector2u vect__ = sfRenderWindow_getSize(rpg->window);
    sfText_setPosition(rpg->menu->quit, (sfVector2f){vect__.x / 2.1, 660});
    sfText_setColor(rpg->menu->quit, sfWhite);
    sfText_setOutlineThickness(rpg->menu->quit, 1.2);
    sfText_setOutlineColor(rpg->menu->title, sfBlack);
}

void create_texts (myrpg_t *rpg)
{
    rpg->menu->font = sfFont_createFromFile("ressource/Vecna.ttf");
    create_title(rpg);
    create_play(rpg);
    create_settings(rpg);
    create_quit(rpg);
}
