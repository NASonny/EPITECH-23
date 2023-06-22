/*
** EPITECH PROJECT, 2022
** B-CPE-101-LIL-1-1-myprintf-mathis.zucchero
** File description:
** lib.h
*/

#include<stdarg.h>
#include "func_lib.h"

#ifndef MY_LIB_
    #define MY_LIB_

typedef struct ptn_funct {
    char conv;
    void (*printf_funct)(va_list *ap);
} ptn_funct;

static const ptn_funct convers[] = {
    {'%', my_put_percent},
    {'c', my_putchar_arg},
    {'s', my_putstr_arg},
    {'f', my_putfloat_arg},
    {'d', my_putint_arg},
    {'i', my_putint_arg},
    {'o', my_convoctal_arg},
    {'u', my_convdecimal_arg},
    {'m', my_m_funct},
    {'F', my_putfloat_arg},
    {'x', my_convhexa_arg},
    {'\0', 0}
//     {'x',},
//     {'X',},
//     {'a',},
//     {'A',},
//     {'p',},
//     {'n',}
};

#endif
