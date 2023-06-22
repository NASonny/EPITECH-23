/*
** EPITECH PROJECT, 2023
** test end
** File description:
** check if it is the end
*/

#include "../include/n4s.h"

int action_end(char *str)
{
    free(str);
    my_putstr("STOP_SIMULATION\n");
    return 1;
}

int loop_for(char *end, int i)
{
    for (;end[i] != ':' && end[i] != 0; i--);
    i--;
    for (;end[i] != ':' && end[i] != 0; i--);
    i++;

    return i;
}

int test_end(char *end, lidar_t *lidar)
{
    int	i = strlen(end) - 1;
    int	j = 0;
    char *message = malloc(sizeof(char *) * strlen(end));

    i = loop_for(end, i);
    while (end[i] != ':' && end[i] != 0)
        message[j++] = end[i++];
    message[j] = 0;
    if (strcmp("Track Cleared", message) == 0)
        return action_end(message);
    free(message);
    return 0;
}
