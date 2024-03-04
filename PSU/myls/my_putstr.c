/*
** EPITECH PROJECT, 2022
** B-CPE-100-LIL-1-1-cpoolday04-mathis.zucchero
** File description:
** my_putstr.c
*/
void my_putchar(char c);

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
