/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_grep_str.c
*/

char *my_grep_str(char reg, char *str)
{
    for (; *str && *str != reg; str++);
    return (++str);
}
