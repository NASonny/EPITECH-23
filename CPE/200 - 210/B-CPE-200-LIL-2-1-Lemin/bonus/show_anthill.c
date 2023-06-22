/*
** EPITECH PROJECT, 2022
** B-CPE-200-LIL-2-1-lemin-mathis.zucchero
** File description:
** show_anthill.c
*/

#include <SFML/Graphics.h>
#include "lemin.h"

sfColor which_color(char * status)
{
    if (my_strcmp(status, "start") == 1)
        return sfGreen;
    if (my_strcmp(status, "end") == 1)
        return sfRed;
    return sfYellow;
}

void set_chamber(lemin_t *lemin, sfRenderWindow *win)
{
    lemin->chamber_ll = lemin->f_adress;
    while (lemin->chamber_ll->next_chamber != NULL) {
        sfCircleShape *circle = sfCircleShape_create();
        sfVector2f pos = {lemin->chamber_ll->x * 1.7, lemin->chamber_ll->y * 0.8};
        sfVector2f size = {50, 50};
        sfColor color = which_color(lemin->chamber_ll->status);
        sfCircleShape_setPosition(circle, pos);
        sfCircleShape_setRadius(circle, 50);
        sfCircleShape_setFillColor(circle, color);
        sfCircleShape_setOutlineColor(circle, sfBlack);
        sfCircleShape_setOutlineThickness(circle, 5);
        sfCircleShape_setOrigin(circle, size);
        sfRenderWindow_drawCircleShape(win, circle, NULL);
        lemin->chamber_ll = lemin->chamber_ll->next_chamber;
    }
}

char *my_int_to_string(int nb)
{
    int i = 0;
    int j = 0;
    char *str = malloc(sizeof(char) * 10);
    int nb2 = nb;

    while (nb2 > 0) {
        nb2 = nb2 / 10;
        i++;
    }
    str[i] = '\0';
    while (nb > 0) {
        str[i - 1] = nb % 10 + 48;
        nb = nb / 10;
        i--;
    }
    return str;
}

void set_name(lemin_t *lemin, sfRenderWindow *win)
{
    lemin->chamber_ll = lemin->f_adress;
    while (lemin->chamber_ll->next_chamber != NULL) {
        sfText *text = sfText_create();
        sfFont *font = sfFont_createFromFile("font.ttf");
        sfVector2f pos = {lemin->chamber_ll->x * 1.7 - 10, lemin->chamber_ll->y * 0.8 - 10};
        sfText_setFont(text, font);
        sfText_setString(text, my_int_to_string(lemin->chamber_ll->num_chamber));
        sfText_setColor(text, sfBlack);
        sfText_setCharacterSize(text, 30);
        sfText_setPosition(text, pos);
        sfRenderWindow_drawText(win, text, NULL);
        lemin->chamber_ll = lemin->chamber_ll->next_chamber;
    }
}

void view_anthill(lemin_t *lemin)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow *win = sfRenderWindow_create(mode, "My window", sfResize | sfClose, NULL);

    sfEvent event;
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        }
        sfRenderWindow_clear(win, sfWhite);
        set_chamber(lemin, win);
        set_name(lemin, win);
        sfRenderWindow_display(win);
    }
    return;
}
