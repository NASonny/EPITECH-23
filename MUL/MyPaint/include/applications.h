/*
** EPITECH PROJECT, 2022
** Struct my_hunter
** File description:
** Struct
*/

#include <stdarg.h>
#include "SFML/Audio.h"
#include "SFML/Graphics.h"
#include "SFML/System.h"
#include "SFML/Window.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct {
    sfRenderWindow *window;
    sfTexture *bg;
    sfIntRect rect;
    sfEvent event;
    sfVector2f position;
    sfTime time;
    sfVector2i posmouse;
} application_t;

typedef struct button_s {
    sfRectangleShape *rect;
    sfTexture *pencil;
    sfVector2f position;
    sfVector2f size;
}button_t;

typedef struct button_e {
    sfRectangleShape *recte;
    sfVector2f position;
    sfVector2f size;
}button_e;

typedef struct menu_bar_t {
    sfText *fileMenu;
    sfText *editMenu;
    sfText *helpMenu;

}menu_bar;

void create_application(application_t *app);
void run_application(application_t *app, button_t *button,
button_e *buttone, menu_bar *menu);
void handle_events(application_t *app);
void draw(application_t *app, button_t *button,
button_e *buttone, menu_bar *menu);
struct button_s * init_button (button_t *button);
struct button_e * eraser_button (button_e *buttone);
void update(application_t *app, float delta);
void fileMenu (menu_bar *menu);
void destroy_application(application_t *app,
button_t *button, button_e *buttone, menu_bar *menu);
void my_putstr(const char *str);
void my_putchar(char c);
void help(void);

#endif /* !STRUCT_H_ */
