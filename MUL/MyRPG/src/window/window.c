/*
** EPITECH PROJECT, 2023
** MY RPG PROJECT
** File description:
** my_rpg file (window)
*/

#include "my_rpg.h"

void main_window(sfRenderWindow *window, sfEvent event, myrpg_t *rpg)
{
    pv_decreaser(rpg);
    while (sfRenderWindow_pollEvent(window, &event)) {
        event_inventory(rpg);
        event_boutique(rpg);
        sell_boutique(rpg, event);
        event_click_button(rpg, event);
        event_pnj_pers(rpg);
        event_echo(rpg);
        event_part(window, event, rpg);
        event_keypressed_error(rpg);
        event_esc(window, event, rpg);
    }
}

void set_sfview(sfRenderWindow* window, myrpg_t *rpg)
{
    rpg->view = sfView_create();
    sfView_setCenter(rpg->view, rpg->pers->pos);
    sfView_setSize(rpg->view, (sfVector2f){800.f, 450.f});
    sfView_zoom(rpg->view, 1.f);
    sfRenderWindow_setView(window, rpg->view);
}

void rend_window_2(myrpg_t *rpg, sfEvent event)
{
    if (rpg->which_win == 2) {
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
        animate_background(rpg);
        rend_texts(rpg);
        check_mouse(rpg, event);
        event_handler(rpg, event);
        sfRenderWindow_display(rpg->window);
        return;
    }
}

void rend_window(sfRenderWindow *window, myrpg_t *rpg, sfEvent event)
{
    if (rpg->which_win == 1) {
        main_window(window, event, rpg);
        draw_all(window, rpg);
        return;
    }
    if (rpg->which_win == 0) {
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
        animate_background(rpg);
        rend_texts(rpg);
        check_mouse(rpg, event);
        event_handler(rpg, event);
        sfRenderWindow_display(rpg->window);
        return;
    }
    if (rpg->which_win == 2) {
        menu_settings(rpg);
    } else {
        other_window(rpg, event);
    }
}

int main_loop(sfRenderWindow *window, sfEvent event, myrpg_t *rpg)
{
    set_sfview(window, rpg);
    while (sfRenderWindow_isOpen(window)) {
        rpg->mouse.center = sfView_getCenter(rpg->view);
        rend_window(window, rpg, event);
    }
    return 0;
}
