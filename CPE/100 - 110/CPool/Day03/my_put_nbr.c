/*
** EPITECH PROJECT, 2022 (made in 2024)
** my_put_nbr.c
** File description:
** Nothing there, just a file description.
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_put_nbr(int nb){
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb / 10 != 0) {
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}