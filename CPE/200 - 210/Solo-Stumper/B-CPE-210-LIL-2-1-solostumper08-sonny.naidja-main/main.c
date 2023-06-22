/*
** EPITECH PROJECT, 2023
** - - -- - - - --- - ---
** File description:
** SOLO STUMPER 8
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Ce que je cherche à faire c'est faire une fonction qui parcours
// mon str avec une boucle for et un int
// i et qu'ensuite il remplace chaque lettre par la macro
// auquel elle est attribué genre en mode si j'ai le mot cafe
// ça va parcours le mot cafe à str[1] il va trouver
// c alors il va print la macro de c puis de a puis f puis e
// pseudo code
// MA FONCTION
// STR = argv1
// int i = 0
// ma boucle for qui fait que ça la parcours jusqu'a ce que j'ai un \0 i++
// si sa rencontre une lettre qui est dans le define print le numéro associé
// sinon si c'est un " " alors ça print 0
// sinon si c'est une MAJUSCULE print # avant chaque nombre qui est en majuscule


char *text_to_multi_tap(char **argv)
{
    char *str = argv[1];
    int ch = 0;
    for (; str[ch] != '\0'; ch++){
        if (str[ch] == 'c' || str[ch] == 'C'){
            ch = c;
            my_put_nbr(ch);
            my_putstr("\n");
        }
        if (str[ch] == ' ')
            my_putstr("\n");
    }
    return str;
}

int main (int argc, char **argv)
{
    if (argc == 2){
        text_to_multi_tap(argv);
    }else
        return 84;
}
