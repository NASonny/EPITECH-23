/*
** EPITECH PROJECT, 2022
** getnbr
** File description:
** string to integer
*/

int	my_getnbr(char *str)
{
    int	nb;
    int	x;
    int	i;
    x = 1;
    nb = 0;
    i = 0;
    while (str[i] == '+' || str[i] == '-') {
            if (str[i] == '-')
                x = x * -1;
            i = i + 1;
            }
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            nb = nb * 10;
            nb = nb + str[i] - '0';
            i = i + 1;
            } else
                return (nb * x);
            }
            return (nb * x);
}
