/*
** EPITECH PROJECT, 2022
** put nbr
** File description:
** nothing there
*/

void my_putchar(char c);

int my_put_nbr(int nombreux)
{
    long length;

    if (nombreux < 0) {
        my_putchar('-');
        length = (long)nombreux;
        length = (-length) % 10;
        if (nombreux < -9)
            my_put_nbr(-(nombreux / 10));
        my_putchar(length + '0');
    } else if (nombreux > 9) {
        my_put_nbr(nombreux / 10);
        my_putchar(nombreux % 10 + '0');
    } else {
        my_putchar(nombreux + '0');
    }
    return (0);
}
