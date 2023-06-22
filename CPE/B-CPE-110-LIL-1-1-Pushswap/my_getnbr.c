/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** string to integer
*/

int	my_getnbr(char *str)
{
    int	nb = 0;
    int	y = 0;

    while (str[0] == '+' || str[0] == '-') {
        if (str[0] == '-')
            y = 1;
            str++;
        }
    for (int i = 0; str[i] != '\0'; i++) {
        nb = (nb * 10) + (str[i] - '0');
    if (y == 1)
        nb--;
    return nb;
    }
}
