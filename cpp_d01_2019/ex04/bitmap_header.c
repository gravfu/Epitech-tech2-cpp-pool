/*
** EPITECH PROJECT, 2020
** bitmap_header.h
** File description:
** bitmap_header
*/

#include <stdio.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    unsigned int i = 1;
    char *endian = (char *) &i;
    if (*endian)
        header->magic = 0x4D42;
    else
        header->magic = 0x424D;
    header->size = size * size * sizeof(int)
        + sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
    header->_app1 = 0;
    header->_app2 = 0;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = 40;
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * sizeof(int);
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
}