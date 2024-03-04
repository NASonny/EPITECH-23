/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** main
*/

#include "include/applications.h"


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
    if (argc == 2){
        if (argv[1][0] == '-' && argv[1][1] == 'h') {
            help();
            return (0);
            }
    }
    application_t app;
    menu_bar menu;
    button_t button;
    button_e buttone;
    create_application(&app);
    init_button(&button);
    eraser_button(&buttone);
    run_application(&app, &button, &buttone, &menu);
    if (!sfRenderWindow_isOpen((&app)->window))
        return 0;
    destroy_application(&app, &button, &buttone, &menu);
}
