/*
** EPITECH PROJECT, 2023
** give.c
** File description:
** give file
*/

#include "../include/n4s.h"

int	give_right_left(float dir, char *str, lidar_t *lidar)
{
    my_putstr("wheels_dir:");
    if (dir < 0.0)
        my_putstr("-");
    my_putstr(str);
    lidar->answer = get_answer();
    return (test_end(lidar->answer, lidar));
}

void give_values(char**array, lidar_t* lidar)
{
    if (array[18] == NULL || array[31] == NULL || array[3] == NULL)
        return;
    else {
        lidar->left = atof(array[3]);
        lidar->right = atof(array[34]);
        lidar->front = atof(array[18]);
    }
}
