/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** increase_car.c
*/

#include "my_rpg.h"

void event_click_button(myrpg_t *rpg, sfEvent event)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(rpg->window);
    if (event.type == sfEvtMouseButtonPressed && event.mouseButton.button ==
    sfMouseLeft) {
        if (mouse.x >= 1060 && mouse.x <= 1130 && mouse.y >= 820 &&
        mouse.y <= 845 && rpg->pers->skill_point > 0) {
            rpg->pers->card->max_pv += 10;
            rpg->pers->skill_point -= 1;
        }
        if (mouse.x >= 1322 && mouse.x <= 1373 && mouse.y >= 800 &&
        mouse.y <= 848 && rpg->pers->skill_point > 0) {
            rpg->pers->card->max_pm += 10;
            rpg->pers->skill_point -= 1;
        }
        if (mouse.x >= 1070 && mouse.x <= 1123 &&
        mouse.y >= 897 && mouse.y <= 944 &&
        rpg->pers->skill_point > 0) {
            rpg->pers->strength += 10;
            rpg->pers->skill_point -= 1;
        }
    }
}

void display_button(myrpg_t *rpg)
{
    sfSprite_setPosition(rpg->pers->card->in_pv->sprite,
    (sfVector2f){rpg->pers->pos.x + 45, rpg->pers->pos.y + 140});
    sfSprite_setPosition(rpg->pers->card->in_atk->sprite,
    (sfVector2f){rpg->pers->pos.x + 45, rpg->pers->pos.y + 184});
    sfSprite_setPosition(rpg->pers->card->in_pm->sprite,
    (sfVector2f){rpg->pers->pos.x + 150, rpg->pers->pos.y + 140});
    sfRenderWindow_drawSprite(rpg->window, rpg->pers->card->in_pv->sprite,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->pers->card->in_atk->sprite,
    NULL);
    sfRenderWindow_drawSprite(rpg->window, rpg->pers->card->in_pm->sprite,
    NULL);
}

void set_sprite_button(myrpg_t *rpg)
{
    rpg->pers->card->in_atk->sprite = sfSprite_create();
    rpg->pers->card->in_pv->sprite = sfSprite_create();
    rpg->pers->card->in_pm->sprite = sfSprite_create();
    sfSprite_setTexture(rpg->pers->card->in_atk->sprite,
    rpg->pers->card->in_atk->text, sfTrue);
    sfSprite_setTexture(rpg->pers->card->in_pv->sprite,
    rpg->pers->card->in_pv->text, sfTrue);
    sfSprite_setTexture(rpg->pers->card->in_pm->sprite,
    rpg->pers->card->in_pm->text, sfTrue);
}

void set_pos_sprite(myrpg_t *rpg)
{
    sfSprite_setOrigin(rpg->pers->card->in_pv->sprite,
    (sfVector2f){0, 0});
    sfSprite_setOrigin(rpg->pers->card->in_atk->sprite,
    (sfVector2f){0, 0});
    sfSprite_setOrigin(rpg->pers->card->in_pm->sprite,
    (sfVector2f){0, 0});
    sfSprite_setPosition(rpg->pers->card->in_pv->sprite,
    (sfVector2f){rpg->pers->pos.x + 45, rpg->pers->pos.y + 140});
    sfSprite_setPosition(rpg->pers->card->in_atk->sprite,
    (sfVector2f){rpg->pers->pos.x + 45, rpg->pers->pos.y + 184});
    sfSprite_setPosition(rpg->pers->card->in_pm->sprite,
    (sfVector2f){rpg->pers->pos.x + 150, rpg->pers->pos.y + 140});
    sfSprite_setScale(rpg->pers->card->in_pv->sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(rpg->pers->card->in_atk->sprite, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(rpg->pers->card->in_pm->sprite, (sfVector2f){0.4, 0.4});
}

void set_button(myrpg_t *rpg)
{
    rpg->pers->card->in_atk = malloc(sizeof(button_t));
    rpg->pers->card->in_pv = malloc(sizeof(button_t));
    rpg->pers->card->in_pm = malloc(sizeof(button_t));
    rpg->pers->card->in_atk->text =
    sfTexture_createFromFile("ressource/button_plus.png", NULL);
    rpg->pers->card->in_pv->text =
    sfTexture_createFromFile("ressource/button_plus.png", NULL);
    rpg->pers->card->in_pm->text =
    sfTexture_createFromFile("ressource/button_plus.png", NULL);
    rpg->pers->card->in_atk->int_r = (sfIntRect){0, 0, 24, 24};
    rpg->pers->card->in_pv->int_r = (sfIntRect){0, 0, 24, 24};
    rpg->pers->card->in_pm->int_r = (sfIntRect){0, 0, 24, 24};
    set_sprite_button(rpg);
    set_pos_sprite(rpg);
}
