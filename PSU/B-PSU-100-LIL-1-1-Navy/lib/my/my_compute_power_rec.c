/*
** EPITECH PROJECT, 2022
** my_compute_power_rec
** File description:
** print power p of a number,
** with an recursive algorythm
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0){
        return 1;
    }
    if (p < 0){
        return 0;
    }
    if (p == 1){
        return nb;
    }
    return (nb * my_compute_power_rec(nb, p - 1));
}
