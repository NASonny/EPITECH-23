/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-antman-sonny.naidja
** File description:
** read_image_data.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <jpeglib.h>

unsigned char *input_buffer;

int read_image_data(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (!file) {
        return 1;
    }
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    rewind(file);
    input_buffer = (unsigned char *)malloc(file_size * sizeof(unsigned char));
    if (!input_buffer) {
        return 1;
    }
    size_t bytes_read = fread(input_buffer,
    sizeof(unsigned char), file_size, file);
    if (bytes_read != file_size) {
        return 1;
    }

    fclose(file);
    return 0;
}
