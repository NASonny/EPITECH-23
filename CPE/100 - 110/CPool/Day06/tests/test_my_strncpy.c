/*
** EPITECH PROJECT, 2022
** Test my StrCpy
** File description:
** Testing
*/

#include <criterion/criterion.h>

Test ( my_strncpy , copy_five_characters_in_empty_array)
{
    char aff [6] = {0};
    my_strncpy ( aff , " HelloWorld " , 5) ;
    cr_assert_str_eq ( aff , " Hello " ) ;
}
