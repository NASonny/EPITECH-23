/*
** EPITECH PROJECT, 2023
** strcmp but with n
** File description:
** my_strncmp
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;
    for (; i < n && s1[i] && s2[i]; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] < s2[i] ? -1 : 1;
        }
    }
    return 0;
}
