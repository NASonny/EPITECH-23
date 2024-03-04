/*
** EPITECH PROJECT, 2023
** Solo Stumper 2
** File description:
** hidenp find one string into the second and return 1 if correct else 0
*/

#include <stddef.h>

void my_putchar(char c);
void my_putstr(const char *str);

int main(int argc, char **argv)
{
    char chaine_1[] = argv[1];
    char chaine_2[] = argv[2];
    int i = 0;
    int x = 0;

    if (argv[1] == NULL || argv[2] == NULL){
        my_putstr("Usage: ./hidenp needle haystack\n");
        return 84;
    }
    
    while (chaine_2[i] != '\0'){
        if (chaine_2[i] == chaine_1[x]){
            my_putstr("1\n");
            i++;
            return 0;
        }else{
            my_putstr("0\n");
            i++;
            return 0;}
    }
    return 0;
}
