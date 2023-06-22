/*
** EPITECH PROJECT, 2023
** need4stek
** File description:
** ia algo
*/

#ifndef N4S_H
    #define N4S_H
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    typedef enum signals{
        START,
        STOP,
        FORWARD,
        BACKWARD,
        DIR,
        INFO_LIDAR,
        SPEED,
        WHEELS,
        CYCLE_WAIT,
        TSPEED,
        BSPEED,
        TIMER,
    }   signal_t;

    static const char *sig_string[12] = {
        "START_SIMULATION",
        "STOP_SIMULATION",
        "CAR_FORWARD:",
        "CAR_BACKWARDS",
        "WHEELS_DIR:",
        "GET_INFO_LIDAR",
        "GET_CURRENT_SPEED",
        "GET_CURRENT_WHEELS",
        "CYCLE_WAIT:",
        "GET_CAR_SPEED_MAX",
        "GET_CAR_SPEED_MIN",
        "GET_INFO_SIMTIME"
    };

    typedef struct lidar{
        float left;
        float right;
        float front;
        char *answer;
    }   lidar_t;

    typedef struct str_to_word_array_s {
        char **words;
        int i;
        int j;
        int k;
        int count;
        int len;
    }   str_to_word_array_t;

    void send_command(signal_t sig);
    void send_command_i(signal_t sig, int i);
    void send_command_f(signal_t sig, float i);
    char *get_answer(void);
    char** get_answer_array(void);
    char **my_str_to_word_array(char* str, char delim);
    int my_dprintf(int fd, const char *format, ...);
    void my_putfloat(double f);
    void my_putnbr(int n);
    void my_putstr(char *str);
    void give_values(char**array, lidar_t* lidar);
    int	give_direction(lidar_t *lidar);
    int	give_right_left(float dir, char *str, lidar_t *lidar);
    int test_end(char *end, lidar_t *lidar);

#endif /* !N4S_H */
