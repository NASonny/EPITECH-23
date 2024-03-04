/*
** EPITECH PROJECT, 2022
** B-MUL-200-LIL-2-1-myrpg-mathis.zucchero
** File description:
** len_int.c
*/

int len_int(int nb)
{
    int len = 0;

    if (nb == 0)
        return (1);
    while (nb != 0) {
        nb = nb / 10;
        len++;
    }
    return (len);
}
