/*
** EPITECH PROJECT, 2022
** LIBMY
** File description:
** Libmy functions
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len])
        ++len;
    return (len);
}

int my_putchar(char c)
{
    write(1, &c, 1);
    return (1);
}

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (my_strlen(str));
}

int intlen(int nb)
{
    int len = 0;

    for (; nb != 0; ++len)
        nb /= 10;
    return (len);
}

int my_put_nbr(int nb)
{
    int len = intlen(nb);

    if (nb == 0) {
        my_putchar('0');
    }
    if (nb < -2147483647) {
        write(1, "-2147483648", 11);
        return (11);
    } else if (nb < 0 && nb >= -2147483647) {
            my_putchar('-');
            nb = -nb;
            ++len;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    if (nb != 0)
        my_putchar(nb % 10 + '0');
    return (len);
}
