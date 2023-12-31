/*
** EPITECH PROJECT, 2022
** printf
** File description:
** my_printf project main .c
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include "my.h"

int my_putchar_arg(va_list ap, struct mod modif);
int my_put_pourcent(va_list ap, struct mod modif);
int my_put_nbr_arg(va_list ap, struct mod modif);
int my_put_octal(va_list ap, struct mod modif);
int my_put_unsigned(va_list ap, struct mod modif);
int my_putstr_arg(va_list ap, struct mod modif);
int my_put_hexa(va_list ap, struct mod modif);
int my_put_hexa_maj(va_list ap, struct mod modif);
int my_put_pointer(va_list ap, struct mod modif);
int my_put_binary_unsigned(va_list ap, struct mod modif);
int my_put_string_octal(va_list ap, struct mod modif);
int my_put_float_f(va_list ap, struct mod modif);
int my_print_scient(va_list ap, struct mod modif);
int my_print_scient_maj(va_list ap, struct mod modif);
int my_put_g_gen(va_list ap, struct mod modif);
int my_is_known_flag(char c);
int my_is_num(char c);
int my_is_flag_or_modifier(char c);
struct mod detect_n(char const *str, va_list ap, struct mod modif);
struct mod detect_p(char const *str, va_list ap, struct mod modif);
int my_put_g_genbis(va_list ap, struct mod modif);

int (*funct[18])(va_list, struct mod) = {&my_put_pourcent,
    &my_put_nbr_arg, &my_put_nbr_arg, &my_putstr_arg, &my_putchar_arg,
    &my_put_unsigned, &my_put_octal, &my_put_hexa, &my_put_hexa_maj,
    &my_put_pointer, &my_put_binary_unsigned, &my_put_string_octal,
    &my_put_float_f, &my_put_float_f, &my_print_scient, &my_print_scient_maj,
    &my_put_g_gen, &my_put_g_genbis};


int my_get_padding(char const *str, int ind, va_list ap, struct mod modif)
{
    int p = 1, nbr = 0;
    int n = (str[ind] == 45) ? -1 : 1;
    modif.pad = (str[ind] == 48) ? 48 : 32;
    if (str[ind] == 42)
        return va_arg(ap, int);
    for (; str[ind] != 46 && !my_is_known_flag(str[ind]);){
        nbr *= p;
        nbr += str[ind] + 47;
        p *= 10;
    }
    nbr *= n;
    return nbr;
}

int my_get_precision(char const *str, int index, va_list ap)
{
    int p = 1, nbr = 0;
    if (str[index] != 46)
        return 6;
    index++;
    if (str[index] == 42)
        return va_arg(ap, int);
    for (; !my_is_known_flag(str[index]); index++){
        nbr *= p;
        nbr += str[index] - 48;
        p *= 10;
    }
    return nbr;
}

int my_print_flags(char const *str, int i, va_list ap, struct mod modif)
{
    char *flags = "%discuoxXpbSfFeEgG";
    int nbr = modif.nbr;
    modif.precision = 6, modif.plus = 0, modif.hashtag = 0,  modif.i = i;
    modif = detect_n(str, ap, modif);
    modif = detect_p(str, ap, modif);
    i = modif.i;
    if (str[i] == 'n')
        return my_put_nbr(nbr);
    for (int index = 0; flags[index]; index++)
        if (flags[index] == str[i])
            return nbr += funct[index](ap, modif);
    return nbr;
}

int my_printf(char const *str, ...)
{
    va_list ap;
    int i;
    va_start(ap, str);
    struct mod modif;

    for (i = 0; str[i] && i < my_strlen(str); i += 2){
        for (; str[i] && str[i] != '%'; modif.nbr += my_putchar(str[i]), i++);
        if (!str[i] || !str[i + 1])
            break;
        modif.nbr = my_print_flags(str, i + 1, ap, modif);
        for (; !my_is_known_flag(str[i + 1]); i++);
    }
    return modif.nbr;
}
