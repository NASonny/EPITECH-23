/*
** EPITECH PROJECT, 2023
** AIA
** File description:
** file who gonna be useful to do the automatic car
*/

#include "../include/n4s.h"

int main(void)
{
    lidar_t *lidar = malloc(sizeof(lidar_t));
    if (lidar == NULL)
        return 84;
    char **array_ = malloc(sizeof(char**) * 100);

    send_command(START);
    dprintf(1, "CAR_FORWARD:0.12\n");
    while (1) {
        dprintf(1, "GET_INFO_LIDAR\n");
        lidar->answer = get_answer();
        array_ = my_str_to_word_array(lidar->answer, ':');
        give_values(array_, lidar);
        give_direction(lidar);
    }
    free(lidar);
    free(array_);
}
