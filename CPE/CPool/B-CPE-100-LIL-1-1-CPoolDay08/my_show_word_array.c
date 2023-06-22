/*
** EPITECH PROJECT, 2022
** my show word array
** File description:
** IDK
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);

int my_putstr(char *str);

int my_show_word_array (char *const *tab)
{
    int x = 0;
    for (x = 0; tab[x] != 0; x++){
        my_putstr(tab[x]);
        my_putchar('\n');
    }
}
