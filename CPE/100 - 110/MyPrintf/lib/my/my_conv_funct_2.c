/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** definition of all the convertion function part 2
*/

#include "func_lib.h"

void my_putint_arg(va_list *ap)
{
    my_put_nbr(va_arg(*ap, int));
}

void my_convoctal_arg(va_list *ap)
{
    my_octal(va_arg(*ap, unsigned int));
}

void my_convdecimal_arg(va_list *ap)
{
    my_decimal(va_arg(*ap, unsigned int));
}

void my_convhexa_arg(va_list *ap)
{
    my_hexdecimal(va_arg(*ap, unsigned int));
}

int my_m_funct(va_list *ap)
{
    write(1, "Success", 8);
}
