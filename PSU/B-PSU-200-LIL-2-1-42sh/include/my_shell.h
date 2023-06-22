/*
** EPITECH PROJECT, 2022
** B-PSU-200-LIL-2-1-minishell2-mathis.beugnies
** File description:
** my_shell.h
*/

#include "my.h"
#ifndef MY_SHELL
    #define MY_SHELL
    #define GET_STR_LIST(x, y, nb) \
while ((x != NULL) && my_strncmp(x->str, y, nb)) \
    x = x->next

typedef struct oprtor_s {
    char *args[1024];
    int status;
    pid_t pid;
} oprtor_t;

typedef struct str_list {
    char *str;
    struct str_list *next;
} str_list;

typedef struct cmd_list {
    char **arr;
    char *out;
    int out_type;
    int old_out;
    char *in;
    int in_type;
    int old_in;
    int pipe_fd[2];
    str_list *input;
    struct cmd_list *pipe;
    struct cmd_list *next;
} cmd_list;

typedef struct deplacement_s {
    char *input;
    char **history;
    int history_index;
    int cursor_position;
    int input_length;
    int history_length;
    char c;
} deplacement_t;

extern str_list *env;
extern cmd_list *cmd;
int minishell(char **env);
int shell(bool prompt, char *pwd);
int shell_input(bool *should_exit, char *pwd);
int shell_run(cmd_list *cur, bool *exit, char *pwd);
int shell_exit(int status, bool *ex, cmd_list *cur);
int shell_run_arr(bool *should_exit, int exit, char *pwd);
str_list *init_env(char **env);
int builtin_env(cmd_list *cur);
int builtin_setenv(char **cmd);
int builtin_unsetenv(char **cmd);
int my_setenv(char *env, char *str);
void show_env(void);
void end_builtin_unsetenv(char **cmd);
char **str_list_to_arr(str_list *head);
int str_count_words(const char *str, const char *separator);
char **str_to_arr(const char *str, const char *separator);
int str_list_len(str_list *head);
void str_list_head(str_list **head, char *str);
void str_list_push(str_list **head, char *str);
void str_list_free(str_list **head);
void str_list_pop(str_list **head);
void str_list_rmv(str_list **head, int n);
char *my_grep_str(char reg, char *str);
int arr_len(char **arr);
void arr_free(char **arr);
int my_execve(cmd_list *cur, char **path, char **env_arr, bool *ex);
int my_builtin(cmd_list *cur, bool *exit, char *pwd);
int builtin_exit(cmd_list *cur, bool *exit);
int builtin_cd(char **cmd);
void operator_and(oprtor_t *oprtor, int j);
void is_operator_and(oprtor_t *oprtor, int j);
void operator_or(oprtor_t *oprtor, int j);
void is_operator_or(oprtor_t *oprtor, int j);
int operator_and_or(oprtor_t *oprtor);
int my_cd(char *cmd);
char *get_cd_path(char *cmd);
int file_exist(char *str);
int is_command(char *str);
int check_alphanum(char *str);
int check_num(char *str);
int is_builtin(char *str);
int check_input_arr(char **arr);
void signal_ctrl_c(int sig);
void signal_ctrl_z(int sig);
void my_prompt(void);
void cmd_parser(cmd_list *cur);
int parse_input(char **arr);
void cmd_list_free(void);
void open_in(cmd_list *cur);
void open_out(cmd_list *cur);
void close_out(cmd_list *cur);
void close_in(cmd_list *cur);
int run_cmd_piped(cmd_list *cur, bool *should_exit, int ret, char *pwd);
void print_cd_error(char *cmd, char *path, struct stat st);
void historique(char const *str, char *pwd);
char *set_pwd(void);
int builtin_history(char **arr, char *pwd);
int print_history(char *pwd);
int clear_history(char *pwd);
int help_history(char *pwd);
char *deplacement_terminal(deplacement_t deplacement);
char *read_char(void);
void my_prompt(void);
void open_double(cmd_list *cur);

#endif
