/*
** EPITECH PROJECT, 2023
** move file
** File description:
** move the characters with a smooth advance
*/

#include "my_rpg.h"

void delete_and_modify_pers_plus_move(myrpg_t* rpg, sfIntRect rect)
{
    sfSprite_setTextureRect(rpg->pers->sprite, rect);
}

void move_loop_xy_minus(myrpg_t* rpg, int choice, float speed)
{
    if (choice == 1) {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x -= speed;
            rpg->pers->pos.y -= speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    } else {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x -= speed;
            rpg->pers->pos.y += speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    }
}

void move_loop_xy_plus(myrpg_t* rpg, int choice, float speed)
{
    if (choice == 1) {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x += speed;
            rpg->pers->pos.y -= speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    } else {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x += speed;
            rpg->pers->pos.y += speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    }
}

void move_loop_x(myrpg_t *rpg, int choice, float speed)
{
    if (choice == 3) {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x -= speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    } else {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.x += speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    }
}

void move_loop_y(myrpg_t *rpg, int choice, float speed)
{
    if (choice == 1) {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.y -= speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);
        }
    } else {
        for (int i = 0; i < rpg->speed; i++){
            rpg->pers->pos.y += speed;
            sfSprite_setPosition(rpg->pers->sprite, rpg->pers->pos);
            move_view(rpg);
            draw_all(rpg->window, rpg);

        }
    }
}
