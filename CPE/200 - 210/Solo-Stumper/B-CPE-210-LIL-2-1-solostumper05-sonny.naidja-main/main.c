/*
** EPITECH PROJECT, 2023
** - - -- - - - --- - ---
** File description:
** SOLO STUMPER 5 I GET IT / I DIDN'T IM FUCKING TOO BAD
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main (int argc, char **argv)
{
    if (argc < 2){
        my_putstr("\n");
        return 0;
    }
    int i = 0;
    int n = '\n';
    int word = 0;
    char *str = argv[1];
    my_putstr(str);
    my_putstr("\n");
    while(str[i] != '\0'){
        i++;
        if (str[i] == n){
            word++;
        }
    }
    printf("%d\n", word);
    return 0;
}
