/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** map_collide.c
*/

#include "my_rpg.h"

void init_img_collider(myrpg_t *rpg)
{
    rpg->map = malloc(sizeof(map_t));
    rpg->map->img = sfImage_createFromFile("ressource/map/m_colors.png");
}

int check_collide(myrpg_t *rpg, int x, int y)
{
    sfVector2f pos = sfSprite_getPosition(rpg->pers->sprite);
    sfColor color = sfImage_getPixel(rpg->map->img, pos.x, pos.y);
    pos.x = pos.x + x + 140;
    pos.y = pos.y + y + 560;
    color = sfImage_getPixel(rpg->map->img, pos.x, pos.y);
    if (color.r == 255 && color.g == 255 && color.b == 255)
        return 0;
    return 1;
}
