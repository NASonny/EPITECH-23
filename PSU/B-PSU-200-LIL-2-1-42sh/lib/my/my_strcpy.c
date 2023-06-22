/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    while (*src)
        *dest++ = *src++;
    *dest = '\0';
    return (dest);
}

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (*src && n > i++)
        *dest++ = *src++;
    return (dest);
}
