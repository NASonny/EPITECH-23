/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** func_lib.h
*/

#include<stdarg.h>
#ifndef MY_FUNC_LIB_
    #define MY_FUNC_LIB_

int my_putstr(char const *str);
int my_strlen(char const *str);
void my_putchar(char c);
int my_compute_power_it(int nb ,int p);
int my_put_nbr(int nb);
void my_put_percent(void);
void my_putstr_arg(va_list *ap);
void my_putchar_arg(va_list *ap);
void my_putfloat_arg(va_list *ap);
void my_putint_arg(va_list *ap);
int my_octal(unsigned int nb);
void my_convoctal_arg(va_list *ap);
int my_decimal(unsigned int nb);
void my_convdecimal_arg(va_list *ap);
int my_printf(char *s, ...);
void my_putchar(char c);
int count_my_int(int var);
int point_prec(char c);
void check_conv(char c, va_list *ap);
int check_precision(char c);
int my_m_funct(va_list *ap);
void my_convhexa_arg(va_list *ap);
int my_hexdecimal(unsigned int nb);

#endif
