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

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct {
    sfRenderWindow *window;

    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *bg;
    sfSprite *spritebg;
    sfTexture *texture2;
    sfSprite *sprite2;
    sfIntRect rect;
    sfEvent event;
    sfVector2f position;
    sfTime time;
    sfVector2i posmouse;
    sfFloatRect floatrect;
    sfClock *clock;
    sfClock *anim;
    float delta;
    float seconds;
    float angle;
} application_t;

void create_application(application_t *app);
void run_application(application_t *app);
void handle_events(application_t *app);
void draw(application_t *app);
void update(application_t *app, float delta);
void destroy_application(application_t *app);
void my_putstr(const char *str);
void my_putchar(char c);
int fs_open_file(int argc, char **argv);
sfCircleShape *create_circle (sfVector2f position, float radius);

#endif /* !STRUCT_H_ */
