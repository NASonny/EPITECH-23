/*
** EPITECH PROJECT, 2023
** MY_RPG PROJECT
** File description:
** MAIN OF MyRpg PROJECT
*/

#include "my_rpg.h"

int main(int argc, char **argv)
{
    if (argc > 1) {
        if (argv[1][0] == '-' && argv[1][1] == 'h')
            write(1, "EDERIA RPG.\nUse : ./myrpg\n", 27);
        return 0;
    }
    myrpg_t *rpg = malloc(sizeof(myrpg_t));
    menu_t *menu = malloc(sizeof(menu_t));
    if (rpg == NULL || menu == NULL)
        return 84;
    memset(rpg, 0, sizeof(myrpg_t));
    rpg->menu = menu;
    rpg->window = create_w(1920, 1080, rpg, "Le Monde d'Ederia");
    init_function(rpg);
    main_menu(rpg);
    main_loop(rpg->window, rpg->event, rpg);
    free_area(rpg);
    sfRenderWindow_destroy(rpg->window);
    return 0;
}
