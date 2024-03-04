/*
** EPITECH PROJECT, 2022
** B-CPE-110-LIL-1-1-antman-sonny.naidja
** File description:
** decompress_image.c
*/

#include "../include/my.h"

int decompress_jpeg_image(const char *input_file, const char *output_file)
{
    FILE *infile;
    if (open_input_file(input_file, &infile)) {
        return 1;
    }

    FILE *outfile;
    if (open_output_file(output_file, &outfile)) {
        return 1;
    }

    struct jpeg_decompress_struct cinfo;
    struct jpeg_error_mgr jerr;
    if (init_decompress_structs(&cinfo, &jerr)) {
        return 1;
    }

    jpeg_read_header(&cinfo, TRUE);
    jpeg_start_decompress(&cinfo);

    int row_stride = cinfo.output_width * cinfo.output_components;
    JSAMPARRAY buffer = (*cinfo.mem->alloc_sarray)((j_common_ptr) &cinfo, JPOOL_IMAGE, row_stride, 1);
    while (cinfo.output_scanline < cinfo.output_height) {
        jpeg_read_scanlines(&cinfo, buffer, 1);
        fwrite(buffer[0], 1, row_stride, outfile);
    }
    jpeg_finish_decompress(&cinfo);
    jpeg_destroy_decompress(&cinfo);
    fclose(infile);
    fclose(outfile);
    return 0;
}
