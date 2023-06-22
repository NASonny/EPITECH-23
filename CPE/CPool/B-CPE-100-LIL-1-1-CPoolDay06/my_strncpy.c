/*
** EPITECH PROJECT, 2022
** my_strncpy.c
** File description:
** Nothing There just a empty file description
*/

char * my_strncpy ( char * aff , char const * origin , int n )
{
    int o = 0;
    while ( n < o ) {
        aff[o] = origin[o];
        o++;
    }
    return (aff);
}
