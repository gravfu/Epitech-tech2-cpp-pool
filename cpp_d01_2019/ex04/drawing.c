/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** drawing
*/

#include <stdio.h>
#include "bitmap.h"
#include "drawing.h"

void draw_square(uint32_t ** img, const point_t * origin, size_t size,
                    uint32_t color)
{
    for (size_t i = origin->y; i < (origin->y + size); i++) {
        for (size_t j = origin->x; j < (origin->x + size); j++) {
            img[i][j] = color;
        }
    }
}