/*
** EPITECH PROJECT, 2022
** Final stumper
** File description:
** Final stumper main function
*/

#include <unistd.h>
#include "include/rush3.h"

int main(void)
{
    char buff[BUFF_SIZE + 1];
    int offset = 0;
    int len;

    while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
        offset += len;
    }
    buff[offset] = 0;
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
