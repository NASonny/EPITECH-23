/*
** EPITECH PROJECT, 2022
** my_print_alpha.c
** File description:
** Nothing there just a file description.
*/
void my_putchar(char c);

int my_print_alpha(void)
{
    char alphabet;
    alphabet = 65;
    for (alphabet = 65; alphabet <= 90; alphabet++)
        my_putchar(alphabet);
    return (0);
}
