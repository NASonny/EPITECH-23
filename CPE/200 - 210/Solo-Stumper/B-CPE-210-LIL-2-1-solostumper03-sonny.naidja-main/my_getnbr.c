/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** string to integer
*/

int	my_getnbr(char *str)
{
    int	nb;
    int	y;
    int	x;
    y = 1;
    nb, x = 0;

    while (str[x] == '+' || str[x] == '-') {
        if (str[x] == '-')
            y *= -1;
        x += 1;
        }
    while (str[x] != '\0') {
        if (str[x] >= '0' && str[x] <= '9') {
            nb *= 10;
            nb += str[x] - '0';
            x += 1;
        } else
            return (nb * y);
    }
    return (nb * y);
}
