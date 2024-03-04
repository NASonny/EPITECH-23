/*
** EPITECH PROJECT, 2023
** str_to_word_array_with_malloc
** File description:
** no conding style if you can't use all lib c fucntion
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/n4s.h"

void fill_word_array(str_to_word_array_t *s, char **words, char *str)
{
    for (s->k = s->j; s->k < s->i; s->k++) {
        words[s->count][s->k - s->j] = str[s->k];
    }
}

char** my_str_to_word_array(char* str, char delim)
{
    str_to_word_array_t *s = malloc(sizeof(str_to_word_array_t));
    if (s == NULL)
        return NULL;
    int len = strlen(str);
    char** words = malloc(len * sizeof(char*));
    for (s->i = 0, s->count = 0; s->i <= len; s->i++) {
        if (str[s->i] == delim || str[s->i] == '\0') {
            words[s->count] = malloc((s->i - s->j + 1) * sizeof(char));
            fill_word_array(s, words, str);
            words[s->count][s->k - s->j] = '\0';
            s->count++;
            s->j = s->i + 1;
        }
    }
    free(s);
    return words;
}
