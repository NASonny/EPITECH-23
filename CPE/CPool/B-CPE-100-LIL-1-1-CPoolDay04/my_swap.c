/*
** EPITECH PROJECT, 2022
** Piscine C Jour 4 task 1
** File description:
** Swap itd
*/
void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int c = *b;
    *b = *a;
    *a = c;
}
