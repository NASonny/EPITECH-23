/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-42sh-mathis.zucchero
** File description:
** my_strisalpha_num.c
*/

int my_strisalpha_num(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9') &&
        (str[i] < 'A' || str[i] > 'Z') &&
        (str[i] < 'a' || str[i] > 'z'))
            return (0);
        i++;
    }
    return (1);
}
