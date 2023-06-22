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

void my_putstr(const char *str);
int my_strcmp (char  * s1, char * s2);
int my_strncmp(const char *s1, const char *s2, int n);
void my_putchar(char c);
#define PROMPT "$> "
