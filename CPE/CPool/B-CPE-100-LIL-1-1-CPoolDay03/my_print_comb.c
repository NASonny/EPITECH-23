/*
** EPITECH PROJECT, 2022
** my_print_comb.c
** File description:
** Nothing there, just a file description.
*/

void my_putchar(char c);

void print_plus(int a, int b)
{
    int c;
    for (c = b + 1; c < 10; ++c){
        my_putchar('0' + a);
        my_putchar('0' + b);
        my_putchar('0' + c);

        if ( a < 7){
            my_putchar(',');
            my_putchar(' ');
        }
    }
}

int my_print_comb(void)
{
    int a;
    int b;
    for (a = 0; a < 10; ++a){
        for (b = a + 1; b < 10; ++b){
            print_plus (a, b);
        }
    }
    my_putchar('\n');
    return (0);
}
