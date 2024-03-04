/*
** EPITECH PROJECT, 2023
** main_menu my_rpg
** File description:
** handle_event
*/

#include "my_rpg.h"

void check_button_play(myrpg_t *rpg, sfEvent event)
{
    rpg->menu->pos = sfMouse_getPositionRenderWindow(rpg->window);
    if (rpg->menu->pos.x > 853 && rpg->menu->pos.x < 1026
        && rpg->menu->pos.y > 455 && rpg->menu->pos.y < 525) {
        sfText_setColor(rpg->menu->play, sfRed);
        sfText_setOutlineColor(rpg->menu->play, sfWhite);
        if (sfRenderWindow_pollEvent(rpg->window, &event) && event.type
        == sfEvtMouseButtonPressed) {
                sfSound_play(rpg->sound->sound);
                rpg->which_win = 1;
                view_gestion(rpg);
        }
    } else {
        sfText_setColor(rpg->menu->play, sfWhite);
        sfText_setOutlineColor(rpg->menu->play, sfBlack);
    }
}

void check_button_settings(myrpg_t *rpg, sfEvent event)
{
    rpg->menu->pos = sfMouse_getPositionRenderWindow(rpg->window);
    if (rpg->menu->pos.x > 779 && rpg->menu->pos.x < 1112
        && rpg->menu->pos.y > 600 && rpg->menu->pos.y < 690) {
        sfText_setColor(rpg->menu->settings, sfRed);
        sfText_setOutlineColor(rpg->menu->settings, sfWhite);
        if (sfRenderWindow_pollEvent(rpg->window, &event) && event.type
            == sfEvtMouseButtonPressed) {
                sfSound_play(rpg->sound->sound);
                rpg->last_win = rpg->which_win;
                rpg->which_win = 2;
                view_gestion(rpg);
            }
    } else {
        sfText_setColor(rpg->menu->settings, sfWhite);
        sfText_setOutlineColor(rpg->menu->settings, sfBlack);
    }
}

void check_button_quit(myrpg_t *rpg, sfEvent event)
{
    rpg->menu->pos = sfMouse_getPositionRenderWindow(rpg->window);
    if (rpg->menu->pos.x > 855 && rpg->menu->pos.x < 1030
        && rpg->menu->pos.y > 792 && rpg->menu->pos.y < 862) {
        sfText_setColor(rpg->menu->quit, sfRed);
        sfText_setOutlineColor(rpg->menu->quit, sfWhite);
        if (sfRenderWindow_pollEvent(rpg->window, &event) && event.type
            == sfEvtMouseButtonPressed)
            sfRenderWindow_close(rpg->window);
    } else {
        sfText_setColor(rpg->menu->quit, sfWhite);
        sfText_setOutlineColor(rpg->menu->quit, sfBlack);
    }
}

void check_mouse (myrpg_t *rpg, sfEvent event)
{
    check_button_play(rpg, event);
    check_button_settings(rpg, event);
    check_button_quit(rpg, event);
    check_button_help(rpg, event);
}

//function to handle events
void event_handler (myrpg_t *rpg, sfEvent event)
{
    while (sfRenderWindow_pollEvent(rpg->window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(rpg->window);
        touch_back_button(rpg, event);
    }
}
