/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** set_sound.c
*/

#include "my_rpg.h"

void set_sound(myrpg_t *rpg)
{
    rpg->sound = malloc(sizeof(sound_t));
    rpg->sound->sound = sfSound_create();
    rpg->sound->buffer = sfSoundBuffer_createFromFile("ressource/click.ogg");
    sfSound_setBuffer(rpg->sound->sound, rpg->sound->buffer);
}
