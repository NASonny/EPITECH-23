/*
** EPITECH PROJECT, 2022
** my_count_int
** File description:
** return the length of int
*/

int count_my_int(int var)
{
    int n = 0;
    int i = 0;
    float temp = 0;

    while (var > 0) {
        ++n;
        temp = (float)var / (float)10;
        var = temp;
        i++;
    }
    return ((i));
}
