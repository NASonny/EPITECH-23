/*
** EPITECH PROJECT, 2023
** give_direction
** File description:
** give the direction
*/

#include "../include/n4s.h"

int part4(lidar_t *lidar, float dir)
{
    if (lidar->front >= 50) {
        return give_right_left(dir, "0.6\n", lidar);
    } else if (lidar->front >= 30) {
        return give_right_left(dir, "0.8\n", lidar);
    } else
        return give_right_left(dir, "0.95\n", lidar);
}

int part3(lidar_t *lidar, float dir)
{
    if (lidar->front >= 200)
        return give_right_left(dir, "0.3\n", lidar);
    else if (lidar->front >= 100)
        return give_right_left(dir, "0.5\n", lidar);
    else
        return part4(lidar, dir);
}

int part2(lidar_t *lidar, float dir)
{
    if (lidar->front >= 600)
        return give_right_left(dir, "0.1\n", lidar);
    else if (lidar->front >= 400)
        return give_right_left(dir, "0.2\n", lidar);
    else
        return part3(lidar, dir);
}

int	give_direction(lidar_t *lidar)
{
    float dir = lidar->left - lidar->right;
    dprintf(2, "%f\n", lidar->front);

    if (lidar->front >= 1500)
        return give_right_left(dir, "0.005\n", lidar);
    else if (lidar->front >= 1000)
        return give_right_left(dir, "0.05\n", lidar);
    else
        return part2(lidar, dir);
}
