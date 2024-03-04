/*
** EPITECH PROJECT, 2022
** Struct stumper
** File description:
** Struct
*/


#ifndef STRUCT_H_
    #define STRUCT_H_

void my_putstr(const char *str);
void my_putchar(char c);
int	my_getnbr(char *str);
int my_print_alpha(void);
int my_put_nbr(int nombreux);
char *my_revstr(char * str);
char *my_strcpy(char *aff, char const *origin);
char *my_strdup (char const * src);
int my_strlen(char const *str);
int size_word(char const *buffer);
int count_word(char const *buffer);
char **my_str_to_word_array (char const * str);
char * my_strncat(char * dest, char const * src, int nb);

#endif /* !STRUCT_H_ */
