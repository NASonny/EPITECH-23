/*
** EPITECH PROJECT, 2022
** Project S.T.A.R Piscine C
** File description:
** I would like a star ⭐ 2
*/
#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}


void print_little_star(unsigned size)
{
    print_little_star_pic(size);
    print_little_star_barre(size);
    print_little_star_milieu(size);
    print_little_star_barre(size);
    print_little_star_pic(size);
}

void print_little_star_pic(unsigned size)
{
    my_putchar(' ');
    my_putchar(' ');
    my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}

void print_little_star_barre(unsigned size)
{
    my_putchar('*');
    my_putchar('*');
    my_putchar('*');
    my_putchar(' ');
    my_putchar('*');
    my_putchar('*');
    my_putchar('*');
    my_putchar('\n');
}

void print_little_star_milieu(unsigned size)
{
    my_putchar(' ');
    my_putchar('*');
    my_putchar(' ');
    my_putchar(' ');
    my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}
