/*
** EPITECH PROJECT, 2023
** - - -- - - - --- - --- - - ---- - -- - - - -- - --- -- ---- 
** File description:
** SOLO STUMPER 8=9
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


// Séparer les arguments pour que je puisse aller les chercher avec un truc comme argvv[i]

//for (int i = 0; i < argc; i++)

// Je dois parser le faite qui il y ai une lettre  + une virgule + un chiffre dans l'argument

// argv[1] "A,3" = argv[1][2] -> ça devrait être la ',' donc argv[1][1] -> 'A'
    
// Calculer ensuite chaque lettre avec chaque chiffre et divisé le tout par l'addition de tout les chiffre de l'argument

// ((argv[i][1] * argv[i][3]) + (argv[i + 1][1] * argv[i + 1][3])) / (argv[i][3] + argv[i + 1][3]) = GPA
           
// Afficher ensuite le résultat du calcul en float avec 2 chiffre après la virgule

           

int main (int argc, char **argv)
{
    int gpa = ((4 * 3) + (3 * 2) + (3 * 9) + (0 * 5)) / ( 3 + 2 + 9 + 5);
    printf("%.2d\n", gpa);
}
