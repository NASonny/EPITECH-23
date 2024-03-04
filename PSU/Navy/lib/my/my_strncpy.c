/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** copier coller n caractères
*/

int my_strlen2(char const *str)
{
    int i = 0;
    for (i = 0; str[i] != '\0'; ++i);
    return i;
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;
    int lenght = my_strlen2(src);
    for (; i < n ; i++){
        dest[i] = src[i];
    } if (n >= lenght) {
        dest[i] = '\0';
    }
    return dest;
}
