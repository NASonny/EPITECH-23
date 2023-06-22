/*
** EPITECH PROJECT, 2022
** PiscineC Day03
** File description:
** Nothing there just a file description.
*/

void my_putchar(char c);

int push_f (int a, int c)
{
    if ( a != 98 || c != 99 ){
                my_putchar(',');
                my_putchar(' ');
            }
}

int my_print_comb2(void)
{
    for (int a = 0; a < 99; a++) {
        for (int c = a + 1; c < 100; c++){
            int a1 = '0' + c / 10;
            int a2 = '0' + c % 10;
            int c1 = '0' + a / 10;
            int c2 = '0' + a % 10;
            my_putchar(c1);
            my_putchar(c2);
            my_putchar(' ');
            my_putchar(a1);
            my_putchar(a2);
            push_f (a, c);
        }
    }
    my_putchar('\n');
    return (0);
}
