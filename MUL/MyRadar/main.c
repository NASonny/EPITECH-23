/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "include/applications.h"
#include <stdarg.h>
#include "SFML/Audio.h"
#include "SFML/Graphics.h"
#include "SFML/System.h"
#include "SFML/Window.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void update (application_t *app, float delta)
{
    sfVector2f position = position = sfSprite_getPosition(app->sprite);

    position.x += 200 * delta;
    sfSprite_setTexture(app->sprite, app->texture, sfTrue);
    sfSprite_setPosition(app->sprite, position);
}

void handle_events(application_t *app)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(app->window, &event)){
        if (event.type == sfEvtClosed || event.key.code == sfKeyEscape)
            sfRenderWindow_close(app->window);
            }
}

int main(int argc, char **argv, char **env)
{
    FILE *inputFile;
    char x;
    inputFile = fopen(argv[1], "r");
    if (inputFile == NULL){
        my_putstr("Cannot open file \n");
        return 84;}
    if (argc > 2)
        return 84;
    if (argc == 2){
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            help();
            return (0);
            }}
    application_t app;
    create_application(&app);
    run_application(&app);
    if (!sfRenderWindow_isOpen((&app)->window))
        return 0;
    fclose(inputFile);
    destroy_application(&app);
}
