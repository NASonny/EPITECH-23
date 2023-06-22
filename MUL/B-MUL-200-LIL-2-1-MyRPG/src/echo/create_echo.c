/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** create_echo.c
*/

#include "my_rpg.h"

void create_health(myrpg_t *rpg)
{
    rpg->echo = rpg->f_mob;
    for (int i = 0; i < 10; i++) {
        rpg->echo->health = sfText_create();
        rpg->echo->health_font = sfFont_createFromFile("ressource/Vecna.ttf");
        sfText_setFont(rpg->echo->health, rpg->echo->health_font);
        sfText_setCharacterSize(rpg->echo->health, 15);
        sfText_setString(rpg->echo->health, int_to_str(rpg->echo->pv));
        sfText_setPosition(rpg->echo->health,
        (sfVector2f){rpg->echo->pos.x + 5, rpg->echo->pos.y - 20});
        rpg->echo = rpg->echo->next;
    }
}

void create_mob_suite(myrpg_t* rpg)
{
    rpg->echo->clock = sfClock_create();
    rpg->echo->frame_number = 0;
    rpg->echo->hitbox = sfRectangleShape_create();
    rpg->echo->status = "alive";
    sf_rectangle_shape_pattern(rpg->echo->hitbox, rpg->echo->pos,
    (sfVector2f){60, 60});
    rpg->echo->next = malloc(sizeof(sprite_t));
    rpg->echo->next = rpg->echo;
    rpg->echo = rpg->echo->next;
}

void create_mob(myrpg_t *rpg)
{
    rpg->echo = malloc(sizeof(echo_t));
    rpg->f_mob = rpg->echo;
    rpg->echo->strength = 7;
    for (int i = 0; i < 10; i++) {
        rpg->echo->scale = (sfVector2f){1.5, 1.5};
        rpg->echo->pos = rand_pos();
        rpg->echo->texture = sfTexture_createFromFile("ressource/echo2.png",
        NULL);
        rpg->echo->sprite = sfSprite_create();
        rpg->echo->rect = (sfIntRect){0, 0, 19, 21};
        rpg->echo->pv = 50;
        rpg->echo->last_pv = rpg->echo->pv;
        sfSprite_setTexture(rpg->echo->sprite, rpg->echo->texture, sfTrue);
        create_mob_suite(rpg);
        create_health(rpg);
    }
}
