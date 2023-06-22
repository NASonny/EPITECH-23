/*
** EPITECH PROJECT, 2022
** .h file for pushswap
** File description:
** Pushswap
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include <stdio.h>
    #include <stdlib.h>

    typedef struct list_s {
        int nb;
        struct list_s *next;
        struct list_s *preced;
    } list_t;

    typedef struct save_s {
        int x;
        int y;
    } save_t;

#endif /* !STRUCT_H_ */
