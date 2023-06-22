/*
** EPITECH PROJECT, 2023
** N4S - get_answers
** File description:
** get the result given by the send_command
*/

#include "../include/n4s.h"

char** get_answer_array(void)
{
    size_t len = 0;
    char *answer;
    char** answer_array;

    if (getline(answer, &len, stdin) <= 0)
        return (NULL);

    return answer_array;
}

char *get_answer(void)
{
    char *answer = NULL;
    size_t len = 0;

    if (getline(&answer, &len, stdin) <= 0)
        return (NULL);
    return (answer);
}
