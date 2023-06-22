/*
** EPITECH PROJECT, 2023
** antman
** File description:
** CPE
*/

#include <stdio.h>
#include <stdlib.h>
#include <jpeglib.h>

unsigned char *input_buffer;

int open_input_file(const char *input_file, FILE **infile)
{
    *infile = fopen(input_file, "rb");
    if (!*infile) {
        return 1;
    }
    return 0;
}

int open_output_file(const char *output_file, FILE **outfile)
{
    *outfile = fopen(output_file, "wb");
    if (!*outfile) {
        return 1;
    }
    return 0;
}

int init_compress_structs(struct jpeg_compress_struct *cinfo,
struct jpeg_error_mgr *jerr)
{
    cinfo->err = jpeg_std_error(jerr);
    jpeg_create_compress(cinfo);
    return 0;
}

int set_compress_params(struct jpeg_compress_struct *cinfo, FILE *outfile, int width, int height, int input_components, J_COLOR_SPACE color_space, int quality)
{
    jpeg_stdio_dest(cinfo, outfile);
    cinfo->image_width = width;
    cinfo->image_height = height;
    cinfo->input_components = input_components;
    cinfo->in_color_space = color_space;
    jpeg_set_defaults(cinfo);
    jpeg_set_quality(cinfo, quality, TRUE);
    return 0;
}

int compress_jpeg_image(const char *input_file,
const char *output_file, int quality)
{
    FILE *infile;
    if (open_input_file(input_file, &infile)) {
        return 1;
    }

    FILE *outfile;
    if (open_output_file(output_file, &outfile)) {
        return 1;
    }

    struct jpeg_compress_struct cinfo;
    struct jpeg_error_mgr jerr;
    if (init_compress_structs(&cinfo, &jerr)) {
        return 1;
    }

    if (set_compress_params(&cinfo, outfile, 800, 600, 3, JCS_RGB, quality)) {
        return 1;
    }

    jpeg_start_compress(&cinfo, TRUE);
    JSAMPROW row_pointer[1];
    while (cinfo.next_scanline < cinfo.image_height) {
        row_pointer[0] = &input_buffer
        [cinfo.next_scanline * cinfo.image_width * cinfo.input_components];
        jpeg_write_scanlines(&cinfo, row_pointer, 1);
    }
    jpeg_finish_compress(&cinfo);
    jpeg_destroy_compress(&cinfo);
    fclose(infile);
    fclose(outfile);
    return 0;
}
