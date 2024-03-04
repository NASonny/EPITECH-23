/*
** EPITECH PROJECT, 2022
** my_print_digits.c
** File description:
** Nothing there just a file description.
*/

void my_putchar(char digits);

int my_print_digits(void)
{
    char digits;

    digits = '0';
    for (digits = '0'; digits <= '9'; digits++)
        my_putchar(digits);
    return (0);
}
