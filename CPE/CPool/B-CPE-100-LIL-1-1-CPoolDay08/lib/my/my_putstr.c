/*
** EPITECH PROJECT, 2022
** put str
** File description:
** Nothing there
*/

void my_putchar(char c);
int my_putstr(char *str);

int my_putstr(char *str)
{
    int hub = 0;

    while (str[hub]) {
        my_putchar(str[hub]);
        hub++;
    }
    return 0;
}
