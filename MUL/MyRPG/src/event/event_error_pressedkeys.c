/*
** EPITECH PROJECT, 2023
** error gestion file
** File description:
** gestion of q + esc, same for s, d, z
*/

#include "my_rpg.h"

// This function is called in the event part of the game
// It is used to avoid the error of the player pressing the keys Q, S, D, Z
// and Escape at the same time

void event_keypressed_error(myrpg_t *rpg)
{
    if (sfKeyboard_isKeyPressed(sfKeyZ) && sfKeyboard_isKeyPressed(sfKeyD)
    && sfKeyboard_isKeyPressed(sfKeyEscape))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyZ) && sfKeyboard_isKeyPressed(sfKeyEscape)
    && sfKeyboard_isKeyPressed(sfKeyQ))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyS) && sfKeyboard_isKeyPressed(sfKeyEscape)
    && sfKeyboard_isKeyPressed(sfKeyD))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyS) && sfKeyboard_isKeyPressed(sfKeyEscape)
    && sfKeyboard_isKeyPressed(sfKeyQ))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyZ) && sfKeyboard_isKeyPressed(sfKeyEscape))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyS) && sfKeyboard_isKeyPressed(sfKeyEscape))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyQ) && sfKeyboard_isKeyPressed(sfKeyEscape))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
    if (sfKeyboard_isKeyPressed(sfKeyD) && sfKeyboard_isKeyPressed(sfKeyEscape))
        sfView_setCenter(rpg->view, (sfVector2f){960, 540});
}
