/*
** EPITECH PROJECT, 2022
** swap
** File description:
** Swap it :)
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}
