/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-42sh-mathis.zucchero
** File description:
** history.c
*/

#include "my_shell.h"

char *set_pwd(void)
{
    str_list *pwd = env;
    pid_t pid = 0;
    GET_STR_LIST(pwd, "PWD=", 4);
    char *pwd_base = malloc(sizeof(char) * (my_strlen(pwd->str) + 1) + 27);
    getcwd(pwd_base, my_strlen(pwd->str) + 1);
    my_strcat(pwd_base, "/src/history/.42sh_history");
    waitpid(pid, NULL, 0);
    return (pwd_base);
}

int nb_cmd(char *pwd)
{
    int file = open(pwd, O_RDONLY);
    if (file == -1)
        return 0;
    struct stat st;
    stat(pwd, &st);
    int size = st.st_size;
    char *buffer = malloc(sizeof(char) * size);
    read(file, buffer, size);
    int nb = 1;
    for (int i = 0; i < size; i++)
        if (buffer[i] == '\n')
            nb++;
    close(file);
    return (nb);
}

int builtin_history(char **arr, char *pwd)
{
    if (arr[1] == NULL)
        return (print_history(pwd));
    if (my_strisalpha_num(arr[1]) == 0 && (my_strcmp(arr[1], "-c") == 0 ||
    my_strcmp(arr[1], "--clear") == 0)) {
        clear_history(pwd);
        return 0;
    }
    if (my_strisalpha_num(arr[1]) == 0 && (my_strcmp(arr[1], "-h") == 0 ||
    my_strcmp(arr[1], "--help") == 0)) {
        help_history(pwd);
        return 0;
    }
    if (arr[1] != NULL && arr[1][0] == '-') {
        printf("history: invalid option '%s'\n", arr[1]);
        printf("Try 'history --help' for more information.\n");
        return 0;
    }
    return 0;
}

int precedent(char const *str, char *pwd, int cmd_nb)
{
    int file = open(pwd, O_RDONLY);
    if (file == -1)
        return 0;
    struct stat st;
    stat(pwd, &st);
    int size = st.st_size;
    char *buffer = malloc(sizeof(char) * size);
    read(file, buffer, size);
    char **array = my_strtoword_array(buffer, '\t');
    for (int i = 0; array[i] != NULL; i++) {
        if (my_strcmp(array[i], my_itoa(cmd_nb - 1)) == 0 &&
        array[i + 1] != NULL && my_strcmp(array[i + 1], str) == 0) {
            free(array);
            close(file);
            return 1;
        }
    }
    free(array);
    close(file);
    return 0;
}

void historique(char const *str, char *pwd)
{
    static int line = 0;
    int file = open(pwd, O_WRONLY | O_CREAT | O_APPEND, 0666);
    int cmd_nb = nb_cmd(pwd);
    if (file == -1 || cmd_nb == -1 || str[0] == '\n')
        return;
    struct stat st;
    stat(pwd, &st);
    char *command = my_itoa(cmd_nb);
    if (precedent(str, pwd, cmd_nb) == 1)
        return;
    write(file, "\t", 1);
    write(file, command, my_strlen(command));
    write(file, "\t", 1);
    write(file, str, my_strlen(str));
    line++;
    write(file, "\n", 1);
    close(file);
}
