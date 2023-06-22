/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** Nothing there just a file description.
*/

void my_putchar(char c);

int my_print_revalpha(void)
{
    char revalphabet;

    revalphabet = 122;
    for (revalphabet = 122; revalphabet >= 97; revalphabet--)
        my_putchar(revalphabet);
    return (0);
}
