/*
** EPITECH PROJECT, 2023
** MY RPG PROJECT
** File description:
** my_rpg file (free)
*/

#include "my_rpg.h"

void free_area(myrpg_t *rpg)
{
    sfSprite_destroy(rpg->menu->sprite);
    sfSprite_destroy(rpg->background->sprite);
    sfTexture_destroy(rpg->background->text);
    sfRectangleShape_destroy(rpg->background->hitbox);
    free(rpg->background);
    sfSprite_destroy(rpg->pers->sprite);
    sfTexture_destroy(rpg->pers->text);
    sfRectangleShape_destroy(rpg->pers->hitbox);
    sfSprite_destroy(rpg->pnj->sprite);
    sfTexture_destroy(rpg->pnj->text);
    sfRectangleShape_destroy(rpg->pnj->hitbox);
    sfRectangleShape_destroy(rpg->interact_forest->hitbox);
    free(rpg->interact_forest);
    free(rpg->pnj);
    free(rpg->pers);
    sfView_destroy(rpg->view);
    free(rpg);
}
