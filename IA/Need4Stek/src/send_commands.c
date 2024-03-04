/*
** EPITECH PROJECT, 2023
** N4S - send_commands
** File description:
** send the commands requested
*/

#include "../include/n4s.h"

void send_command(signal_t sig)
{
    my_dprintf(1, "%s\n", sig_string[sig]);
}

void send_command_i(signal_t sig, int i)
{
    my_dprintf(1, "%s%d\n", sig_string[sig], i);
}

void send_command_f(signal_t sig, float i)
{
    my_dprintf(1, "%s%1f\n", sig_string[sig], i);
}
