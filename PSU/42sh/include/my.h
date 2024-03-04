/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my.h
*/

#include <fcntl.h>
#include <grp.h>
#include <pwd.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>
#include <termios.h>

#ifndef DEF_MAIN
    #define DEF_MAIN
    #define RESET   "\033[0m"
    #define BLACK   "\033[30m"
    #define RED     "\033[31m"
    #define GREEN   "\033[32m"
    #define YELLOW  "\033[33m"
    #define BLUE    "\033[34m"
    #define MAGENTA "\033[35m"
    #define CYAN    "\033[36m"
    #define WHITE   "\033[37m"
    #define FAILURE 84
    #define SUCCESS 0
    #define ABS(x) ((x) < 0 ? (x) * -1 : (x))
    #define MAX_HISTORY 10
    #define MAX_INPUT 100

int my_strisalpha_num(char const *str);
int my_strlen_delim(char const *str, char delim);
double my_sqrt(double nb);
double my_pow(double x, int y);
int my_atoi(const char *str);
double my_atof(const char *str);
int my_ilen(const int number);
char *my_itoa(int number);
char *my_ftoa(double number, int precision);
int my_ferror(const char *error);
int my_printf(const char *str, ...);
int my_dprintf(int fd, const char *str, ...);
int m_check(void *m_ret);
int my_grep(const char *str, const char c);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *src);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, const int nb);
char *my_strdup(const char *str);
char **my_strtoword_array(char const *str, char delim_char);

#endif
