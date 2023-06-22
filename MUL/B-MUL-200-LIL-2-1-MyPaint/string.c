/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** string
*/

#include "include/applications.h"

void file_menu(menu_bar *menu)
{
    menu->fileMenu = sfText_create();
    sfFont* font = sfFont_createFromFile("assets/FiraCode-Regular.ttf");
    sfText_setString(menu->fileMenu, "File");
    sfText_setFont(menu->fileMenu, font);
    sfText_setCharacterSize(menu->fileMenu, 16);
    sfText_setFillColor(menu->fileMenu, sfBlack);
    sfText_setPosition(menu->fileMenu, (sfVector2f) { 15, 0 });
}

void help_menu(menu_bar *menu)
{
    menu->fileMenu = sfText_create();
    sfFont* font = sfFont_createFromFile("assets/FiraCode-Regular.ttf");
    sfText_setString(menu->helpMenu, "Help");
    sfText_setFont(menu->helpMenu, font);
    sfText_setCharacterSize(menu->helpMenu, 16);
    sfText_setFillColor(menu->helpMenu, sfBlack);
    sfText_setPosition(menu->helpMenu, (sfVector2f) { 190, 0 });
}
