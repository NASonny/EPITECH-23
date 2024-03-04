/*
** EPITECH PROJECT, 2023
** func stockage
** File description:
** func_stock
*/

#include "struct.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <sys/time.h>

#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#include <signal.h>
#include <errno.h>
#include <fcntl.h>

#pragma once
// ↓ toutes les fonctions utilisable ↓

char **my_str_to_word_array (char const * str);
int count_word(char const *buffer);
int size_word(char const *buffer);

int open_file(char const *filepath);
int read_file(int fd, char *buffer, int size);
char **get_map(char *path);

void display_array(char **array);

//void initdante(struct_t *dante, char *path);
char **tab (char *av[]);

void my_putchar(char c);
void my_putstr(const char *str);
