/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** set_text.c
*/

#include "my_rpg.h"

void set_pos(myrpg_t *rpg)
{
    sfText_setPosition(rpg->pers->card->gold,
    (sfVector2f){rpg->pers->pos.x - 80, rpg->pers->pos.y + 190});
    sfText_setPosition(rpg->pers->card->pv,
    (sfVector2f){rpg->pers->pos.x - 20, rpg->pers->pos.y + 150});
    sfText_setPosition(rpg->pers->card->atk,
    (sfVector2f){rpg->pers->pos.x - 20, rpg->pers->pos.y + 184});
    sfText_setPosition(rpg->pers->card->pm,
    (sfVector2f){rpg->pers->pos.x + 102, rpg->pers->pos.y + 140});
    sfText_setPosition(rpg->pers->card->lvl,
    (sfVector2f){rpg->pers->pos.x - 90, rpg->pers->pos.y + 150});
    sfText_setPosition(rpg->pers->card->xp,
    (sfVector2f){rpg->pers->pos.x + 102, rpg->pers->pos.y + 184});
}

void set_charsize(myrpg_t *rpg)
{
    sfText_setCharacterSize(rpg->pers->card->gold, 20);
    sfText_setCharacterSize(rpg->pers->card->pv, 15);
    sfText_setCharacterSize(rpg->pers->card->atk, 15);
    sfText_setCharacterSize(rpg->pers->card->pm, 15);
    sfText_setCharacterSize(rpg->pers->card->lvl, 20);
    sfText_setCharacterSize(rpg->pers->card->xp, 15);
    sfText_setCharacterSize(rpg->pers->card->skill_point, 15);
}

void set_font(myrpg_t *rpg)
{
    sfText_setFont(rpg->pers->card->gold, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->pv, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->atk, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->pm, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->lvl, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->xp, rpg->pers->card->font);
    sfText_setFont(rpg->pers->card->skill_point, rpg->pers->card->font);
}

void set_string(myrpg_t *rpg)
{
    char *pv = my_strconcat(int_to_str(rpg->pers->pv), "/");
    char *pm = my_strconcat(int_to_str(rpg->pers->mana), "/");
    char *atk = int_to_str(rpg->pers->strength);
    char *xp = my_strconcat(int_to_str(rpg->pers->xp), "/");
    char *skill_pts = my_strconcat(int_to_str(rpg->pers->skill_point), "Pts");
    pv = my_strconcat(pv, int_to_str(rpg->pers->card->max_pv));
    pm = my_strconcat(pm, int_to_str(rpg->pers->card->max_pm));
    xp = my_strconcat(xp, int_to_str(rpg->pers->card->next_lvl));
    sfText_setString(rpg->pers->card->gold, int_to_str(rpg->pers->gold));
    sfText_setString(rpg->pers->card->pv, pv);
    sfText_setString(rpg->pers->card->atk, atk);
    sfText_setString(rpg->pers->card->pm, pm);
    sfText_setString(rpg->pers->card->lvl, int_to_str(rpg->pers->level));
    sfText_setString(rpg->pers->card->xp, xp);
    sfText_setString(rpg->pers->card->skill_point, skill_pts);
}

void set_text(myrpg_t *rpg)
{
    rpg->pers->card->font = sfFont_createFromFile("ressource/Vecna.ttf");
    rpg->pers->card->gold = sfText_create();
    rpg->pers->card->pv = sfText_create();
    rpg->pers->card->atk = sfText_create();
    rpg->pers->card->pm = sfText_create();
    rpg->pers->card->lvl = sfText_create();
    rpg->pers->card->xp = sfText_create();
    rpg->pers->card->skill_point = sfText_create();
    set_string(rpg);
    set_font(rpg);
    set_charsize(rpg);
    set_pos(rpg);
}
