/*
** EPITECH PROJECT, 2022
** Project S.T.A.R Piscine C
** File description:
** I would like a star ⭐
*/
#include <stdio.h>
#include <stdlib.h>

void print_little_star(unsigned size);

void my_putchar(char c);

void print_pic(int rows, int i)
{
    int space, star = 0;

        for (space = 1; space < (rows - i) + rows * 2; space++) {
            my_putchar(' ');
        }
        for (star = 0; star <= 2 * i; star++) {
            if (star == 0 || star == 2 * i)
                my_putchar('*');
            else
            my_putchar(' ');
        }
        my_putchar('\n');
}

void print_horizontal(unsigned int size)
{
    for (int i = 0; i < size * 2 + 1; i++){
        my_putchar('*');
    }
    for (int i = 0; i < size * 2 - 3; i++){
        my_putchar(' ');
    }
    for (int i = 0; i < size * 2 + 1; i++){
        my_putchar('*');
    }
    my_putchar('\n');
}

void print_cote_bas(unsigned int size)
{
    for (int row = size - 1; row > 0; row--){
        for (int i = 0; i < row; i++){
            my_putchar(' ');
        }
        my_putchar('*');
        for (int i = ((size * 6 - 3) - row * 2); i > 0; i--){
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
}

void print_cote_haut(unsigned size)
{
    for (int row = 1; row < size + 1; row++){
        for (int i = 0; i < row; i++){
            my_putchar(' ');
        }
        my_putchar('*');
        for (int i = ((size * 6 - 3) - row * 2); i > 0; i--){
            my_putchar(' ');
        }
        my_putchar('*');
        my_putchar('\n');
    }
}

void star(unsigned int size)
{
    if (size == 1){
        print_little_star(size);
        return;
    }
    if (size == 0){
        return;
    }
    for (int i = 0; i < size; i++){
        print_pic(size, i);
    }
    print_horizontal(size);
    print_cote_haut(size);
    print_cote_bas(size);
    print_horizontal(size);

    for (int i = size - 1 ; i >= 0; i--){
        print_pic(size, i);
    }
}
