/*
** EPITECH PROJECT, 2022
** my_revstr
** File description:
** Nothing There
*/

char * my_revstr ( char * str )
{
    int v = 0;
    int i = 0;
    int e = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;

    while (v < i) {
        e = str[v];
        str[v] = str[i];
        str[v] = e;

        v++;
        i--;
    }
    return (str);
}
