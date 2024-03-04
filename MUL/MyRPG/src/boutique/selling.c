/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** selling_1.c
*/

#include "my_rpg.h"

int check_money(myrpg_t *rpg, int price)
{
    if (rpg->pers->gold >= price) {
        rpg->pers->gold -= price;
        return 1;
    } else {
        return 0;
    }
}
