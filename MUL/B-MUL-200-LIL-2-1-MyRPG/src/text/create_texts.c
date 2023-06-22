/*
** EPITECH PROJECT, 2023
** create texts
** File description:
** create some texts
*/

#include "my_rpg.h"

sfText* create_text_min(myrpg_t* rpg, sfText* text, char* str, sfVector2f pos)
{
    text = sfText_create();
    sfText_setFont(text, rpg->menu->font);
    sfText_setCharacterSize(text, 15);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfText_setColor(text, sfBlack);

    return text;
}

sfText* create_text_max(myrpg_t* rpg, sfText* text, char* str, sfVector2f pos)
{
    text = sfText_create();
    sfText_setFont(text, rpg->menu->font);
    sfText_setCharacterSize(text, 30);
    sfText_setString(text, str);
    sfText_setPosition(text, pos);
    sfText_setColor(text, sfWhite);
    sfText_setOutlineThickness(text, 0.8);
    sfText_setOutlineColor(text, sfBlack);

    return text;
}
