/*
** EPITECH PROJECT, 2023
** Count Words
** File description:
** SOLO STUMPER1
*/

#include "include/applications.h"
#include <stddef.h>
#include <stdio.h>
#include <string.h>

// String x : " ", on va chercher chaque mot dans la string, 
// Qu'est ce qu'un mot ? :  x lettre suivie d'un espace  
// Donc on peut check si pour chaque lettre si il correspond à un espace on rajoute ++ à une variable

int main(int argc, char **argv, const char *str ) {
    if (argc != 2) {
        printf("Usage: %s <string>\n", argv[0]);
        return 84;
    }
    str = argv[1];
    int nbMot = 0;
    for (int i = 0, len = strlen(str); i < len; i++) {
        // Si c'est le premier caractère ou un caractère suivant un espace et qu'il n'est pas un espace lui-même,
        // alors c'est le début d'un nouveau mot.
        if ((i == 0 || str[i-1] == ' ') && str[i] != ' ') {
            nbMot++;
        }
    }
    printf("%i\n", nbMot);
    return 0;
}
