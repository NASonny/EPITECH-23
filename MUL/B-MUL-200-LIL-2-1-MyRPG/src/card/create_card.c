/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** create_card.c
*/

#include "my_rpg.h"

void init_card(myrpg_t *rpg)
{
    rpg->pers->fiche_perso =
    sfTexture_createFromFile("ressource/fiche_perso.png", NULL);
    rpg->pers->fiche = sfSprite_create();
    sfSprite_setTexture(rpg->pers->fiche, rpg->pers->fiche_perso, sfTrue);
    sfSprite_setPosition(rpg->pers->fiche,
    (sfVector2f){rpg->pers->pos.x - 180, rpg->pers->pos.y + 130});
    sfSprite_setScale(rpg->pers->fiche, (sfVector2f){0.5, 0.5});
    rpg->pers->card = malloc(sizeof(card_t));
    rpg->pers->card->max_pv = 100;
    rpg->pers->card->max_pm = 100;
    rpg->pers->card->next_lvl = 100;
    set_text(rpg);
    set_button(rpg);
}

void set_string_pos(myrpg_t *rpg)
{
    sfText_setPosition(rpg->pers->card->gold,
    (sfVector2f){rpg->pers->pos.x - 100 - len_int(rpg->pers->gold)
    * 5, rpg->pers->pos.y + 184});
    sfText_setPosition(rpg->pers->card->pv,
    (sfVector2f){rpg->pers->pos.x - 20, rpg->pers->pos.y + 140});
    sfText_setPosition(rpg->pers->card->pm,
    (sfVector2f){rpg->pers->pos.x + 102, rpg->pers->pos.y + 140});
    sfText_setPosition(rpg->pers->card->atk,
    (sfVector2f){rpg->pers->pos.x - 20, rpg->pers->pos.y + 184});
    sfText_setPosition(rpg->pers->card->lvl,
    (sfVector2f){rpg->pers->pos.x - 105, rpg->pers->pos.y + 150});
    sfText_setPosition(rpg->pers->card->xp,
    (sfVector2f){rpg->pers->pos.x + 102, rpg->pers->pos.y + 184});
    sfText_setPosition(rpg->pers->card->skill_point,
    (sfVector2f){rpg->pers->pos.x + 20, rpg->pers->pos.y + 162});
}

void display_card(myrpg_t *rpg)
{
    set_string(rpg);
    set_string_pos(rpg);
    sfSprite_setPosition(rpg->pers->fiche,
    (sfVector2f){POS.x - 180, POS.y + 130});
    sfRenderWindow_drawSprite(rpg->window, rpg->pers->fiche, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->gold, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->pv, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->pm, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->atk, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->lvl, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->xp, NULL);
    sfRenderWindow_drawText(rpg->window, rpg->pers->card->skill_point, NULL);
    display_button(rpg);
}
