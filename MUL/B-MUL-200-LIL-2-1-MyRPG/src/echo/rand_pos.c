/*
** EPITECH PROJECT, 2023
** rand pos
** File description:
** random position for echo
*/

#include "my_rpg.h"

sfVector2f rand_pos(void)
{
    sfVector2f pos = {0, 0};
    int x = rand() % 1920;
    int y = rand() % 1080;

    pos.x = x;
    pos.y = y;
    return pos;
}
