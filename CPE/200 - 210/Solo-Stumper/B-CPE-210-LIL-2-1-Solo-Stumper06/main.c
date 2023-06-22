/*
** EPITECH PROJECT, 2023
** - - -- - - - --- - ---
** File description:
** SOLO STUMPER 6
*/

#include "include/my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void check_arg(int argc, char **argv)
{
    char string1[50], string2[50], sepa[50], fsepa[50];
    if (argc == 4){
        my_strcpy(string1, argv[1]);
        my_strcpy(string2, argv[2]);
        my_strcpy(fsepa, argv[3]);
        my_putstr(string1);
        my_putstr(fsepa);
        my_putstr(string2);
        my_putstr("\n");
    }
    if (argc == 5){
        my_strcpy(string1, argv[1]);
        my_strcpy(string2, argv[2]);
        my_strcpy(sepa, argv[3]);
        my_strcpy(fsepa, argv[4]);
        my_putstr(string1);
        my_putstr(fsepa);
        my_putstr(string2);
        my_putstr("\n");
    }
}

void check_second_arg(int argc, char **argv)
{
    char string1[100], string2[100], string3[100], string4[100],
        string5[100], string6[100], string7[100],
        separator[100], fseparator[100];
    if (argc == 6){
        my_strcpy(string1, argv[1]);
        my_strcpy(string2, argv[2]);
        my_strcpy(string3, argv[3]);
        my_strcpy(separator, argv[4]);
        my_strcpy(fseparator, argv[5]);
        my_putstr(string1);
        my_putstr(separator);
        my_putstr(string2);
        my_putstr(fseparator);
        my_putstr(string3);
        my_putstr("\n");
    }
}

int main (int argc, char **argv)
{
    if (argc == 3)
        my_putstr("\n");
    if (argc < 3){
        return 84;
    }
    check_arg(argc, argv);
    check_second_arg(argc, argv);
}
