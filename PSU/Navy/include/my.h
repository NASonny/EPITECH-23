/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** include all my functions of libmy.a
*/

#ifndef MY_H
    #define MY_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdint.h>
    struct mod {
        int padding;
        int precision;
        char pad;
        int nbr;
        int i;
        char plus;
        char hashtag;
        char space;
    };
    struct opt_s {
        char *clean;
        char **tab;
        int keep;
        int line;
        int x;
        int y;
    }typedef opt_t;
    int my_putchar(char c);
    int my_intlen(long int c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    char *my_strcat(char *dest, char const *src);
    char *my_revstr(char *str);
    int my_compute_power_rec(int nbr, int p);
    int my_printf(char const *str, ...);
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
    struct mod detect_n(char const *str, va_list ap, struct mod modif);
    struct mod detect_p(char const *str, va_list ap, struct mod modif);
    int my_is_known_flag(char c);
    int my_is_num(char c);
    int my_put_g_genbis(va_list ap, struct mod modif);
    int print_space(struct mod modif, long double nbr);
    char *my_strncpy(char *dest, char const *src, int n);
    int di(char c, char const *cut);
    int opti(int which, opt_t va);
    void help(void);
#endif
