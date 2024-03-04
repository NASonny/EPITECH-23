/*
** EPITECH PROJECT, 2022
** CPool Day 11 : mylist.h
** File description:
** mylist
*/

#ifndef MYLIST_H_
    #define MYLIST_H_

typedef struct linked_list {
    void * data ;
    struct linked_list * next ;
    int argc;
    char * const *argv;
} linked_list_t ;

linked_list_t *my_params_to_list(int argc, char *const *argv);


#endif /* !MYLIST_H_ */
