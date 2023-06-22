/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday04-mathis.zucchero
** File description:
** my_strlen.c
*/

int my_strlen_delim(char const *str, char delim)
{
    int i = 0;

    for (; str[i] != delim; i++);
    return i;
}

int my_strlen_line(char const *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++);
    return i;
}

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
