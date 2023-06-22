/*
** EPITECH PROJECT, 2022
** put str
** File description:
** Nothing there
*/

void my_putchar(char c);

void my_putstr(const char *str)
{
    int rx = 0;
    while (str[rx]) {
        my_putchar(str[rx]);
        rx++;
    }
}
