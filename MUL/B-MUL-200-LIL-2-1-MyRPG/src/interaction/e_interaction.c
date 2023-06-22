/*
** EPITECH PROJECT, 2023
** e_interaction
** File description:
** interaction between 2 int rect after a E pressed key
*/

#include "my_rpg.h"

void e_interaction_4(myrpg_t* rpg)
{
    if (rpg->draw == 9) {
        sfText *t = malloc(sizeof(char *) * 100);
        t = create_text_max(rpg, t, "PRESS E TO ENTER !",
        (sfVector2f){1150, 400});
        sfRenderWindow_drawText(rpg->window, t, NULL);
    }
}

void e_interaction_3(myrpg_t* rpg)
{
    if (rpg->draw == 3) {
        display_bubble(rpg, (sfVector2f){0.3, 0.1});
        sfText *t = malloc(sizeof(char *) * 100);
        t = create_text_min(rpg, t, "Tue-les et je te recompenserais",
        (sfVector2f){795, 355});
        sfText *tx = malloc(sizeof(char *) * 100);
        tx = create_text_max(rpg, t, "Press ENTER to exit",
        (sfVector2f){POS.x - 145, POS.y + 90});
        sfRenderWindow_drawText(rpg->window, tx, NULL);
        sfRenderWindow_drawText(rpg->window, t, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            sfText_destroy(t);
            sfText_destroy(tx);
            rpg->draw = 5;
        }
    }
    e_interaction_4(rpg);
}

void e_interaction_2(myrpg_t* rpg)
{
    if (rpg->draw == 2) {
        display_bubble(rpg, (sfVector2f){0.35, 0.1});
        sfText *t = malloc(sizeof(char *) * 100);
        t = create_text_min(rpg, t, "Il y a des monstres pres de la foret !",
        (sfVector2f){795, 355});
        sfText *tx = malloc(sizeof(char *) * 100);
        tx = create_text_max(rpg, t, "Press SPACE to continue",
        (sfVector2f){POS.x - 145, POS.y + 90});
        sfRenderWindow_drawText(rpg->window, tx, NULL);
        sfRenderWindow_drawText(rpg->window, t, NULL);;
        if (sfKeyboard_isKeyPressed(sfKeySpace)) {
            sfText_destroy(t);
            sfText_destroy(tx);
            rpg->draw = 3;
        }
    }
    e_interaction_3(rpg);
}

void e_interaction(myrpg_t* rpg)
{
    if (rpg->draw == 1) {
        display_bubble(rpg, (sfVector2f){0.1, 0.1});
        sfText *t = malloc(sizeof(char *) * 100);
        t = create_text_min(rpg, t, "Bonjour !", (sfVector2f){788, 355});
        sfText *tx = malloc(sizeof(char *) * 100);
        tx = create_text_max(rpg, t, "Press ENTER to continue",
        (sfVector2f){POS.x - 145, POS.y + 90});
        sfRenderWindow_drawText(rpg->window, tx, NULL);
        sfRenderWindow_drawText(rpg->window, t, NULL);
        if (sfKeyboard_isKeyPressed(sfKeyEnter)) {
            sfText_destroy(t);
            sfText_destroy(tx);
            rpg->draw = 2;
        }
    }
    e_interaction_2(rpg);
}
