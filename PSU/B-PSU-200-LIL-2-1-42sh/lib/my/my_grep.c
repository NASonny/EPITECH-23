/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_grep.c
*/

int my_grep(const char *str, const char c)
{
    int found = 0;

    while (*str)
        found += *str++ == c;
    return (found);
}
