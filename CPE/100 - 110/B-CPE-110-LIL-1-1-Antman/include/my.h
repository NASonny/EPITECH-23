/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** Storage
*/

#ifndef MY_H_
    #define MY_H_

    #include <jpeglib.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>

typedef struct s_jpeg {
    struct jpeg_decompress_struct cinfo;
    struct jpeg_error_mgr jerr;
    FILE *file;
    JSAMPARRAY buffer;
    int row_stride;
    int width;
    int height;
    int size;
    int *data;
} t_jpeg;

typedef struct s_bmp {
    int width;
    int height;
    int size;
    int *data;
} t_bmp;

typedef struct s_img {
    t_jpeg *jpeg;
    t_bmp *bmp;
} t_img;


int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_getnbr(char const *str);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);


t_img *load_jpeg(char *path);
t_img *load_bmp(char *path);
void save_jpeg(char *path, t_img *img);
void save_bmp(char *path, t_img *img);
void free_img(t_img *img);


#endif /* !MY_H_ */
