/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday05-mathis.zucchero
** File description:
** my_compute_power_it.c
*/

int my_compute_power_it( int nb , int p )
{
    int number = 1;

    for (int i = 0; i < p; i++) {
        number *= nb;
    }
    return number;
}
