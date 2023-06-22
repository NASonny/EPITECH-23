/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_dprintf.c
*/

#include "myprintf.h"

int my_dprintf(int fd, const char *ag, ...)
{
    va_list li;
    flag flag;
    int ac = 0;
    int count = 0;

    init_pfa();
    va_start(li, ag);
    for (int i = 0; ag[i] && ac < MAX_ARGS; i++) {
        if (ag[i] == '%') {
            i += flag_parse(&ag[i + 1], &flag, flag_reset(&flag));
            count += flag_process(fd, li, &flag, flag.spe);
        } else
            count += my_putchar(fd, ag[i]);
    }
    va_end(li);
    return (count);
}
