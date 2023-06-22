/*
** EPITECH PROJECT, 2023
** Untitled (Workspace)
** File description:
** menu_settings
*/

#include "my_rpg.h"

void button_click1(myrpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (mouse.x >= 310 && mouse.x <= 475 && mouse.y >= 360 && mouse.y <= 405) {
        sfRenderWindow_close(rpg->window);
        sfRenderWindow_destroy(rpg->window);
        rpg->window = create_w_f(1920, 1080, rpg, "Le Monde d'Ederia");
        rpg->which_win = 0;
    }
    if (mouse.x >= 580 && mouse.x <= 750 && mouse.y >= 360 && mouse.y <= 405) {
        sfRenderWindow_close(rpg->window);
        sfRenderWindow_destroy(rpg->window);
        rpg->window = create_w(1920, 1080, rpg, "Le Monde d'Ederia");
        rpg->which_win = 0;
    }
    if (mouse.x >= 1220 && mouse.x <= 1317 && mouse.y >= 360 &&
    mouse.y <= 450) {
        sfMusic_setVolume(rpg->music->music, 100);
    }
    if (mouse.x >= 1536 && mouse.x <= 1638 && mouse.y >= 360 &&
    mouse.y <= 450)
        sfMusic_setVolume(rpg->music->music, 0);
}

void button_click2(myrpg_t *rpg)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (mouse.x >= 422 && mouse.x <= 680 && mouse.y >= 752 && mouse.y <= 787) {
        sfRenderWindow_close(rpg->window);
        sfRenderWindow_destroy(rpg->window);
        rpg->window = create_w(1920, 1080, rpg, "Le Monde d'Ederia");
        rpg->which_win = 0;
    }
    if (mouse.x >= 422 && mouse.x <= 670 && mouse.y >= 860 && mouse.y <= 895) {
        sfRenderWindow_close(rpg->window);
        sfRenderWindow_destroy(rpg->window);
        rpg->window = create_w(1024, 768, rpg, "Le Monde d'Ederia");
        rpg->which_win = 0;
    }
}

void settings_handler(myrpg_t *rpg)
{
    if (sfRenderWindow_pollEvent(rpg->window, &rpg->event)){
        if (rpg->event.type == sfEvtClosed)
            sfRenderWindow_close(rpg->window);
        if (rpg->event.type == sfEvtMouseButtonPressed) {
            button_click1(rpg);
            button_click2(rpg);
            volume_click(rpg);
            quit_click(rpg);
            touch_back_button(rpg, rpg->event);
        }
    }
}

//function window_isopen
void window_isopen(myrpg_t *rpg)
{
    while (sfRenderWindow_isOpen(rpg->window)) {
        sfRenderWindow_display(rpg->window);
        settings_handler(rpg);
        event_handler(rpg, rpg->event);
        animate_background(rpg);
        draw_settings_menu(rpg);
    }
}

//function to create the settings rpg
void menu_settings(myrpg_t *rpg)
{
    sfRenderWindow_clear(rpg->window, sfBlack);
    sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    create_background(rpg);
    create_text_settings(rpg);
    create_text_volume(rpg);
    create_volumeoff_button(rpg);
    create_volumeon_button(rpg);
    create_volume_down_button(rpg);
    create_volume_up_button(rpg);
    create_text_resolution_1920x1080(rpg);
    create_text_resolution_1600x900(rpg);
    create_button_yes(rpg);
    create_button_no(rpg);
    create_button_back(rpg);
    create_text_fullscreen(rpg);
    create_text_resolution(rpg);
    draw_settings_menu(rpg);
    window_isopen(rpg);
}
