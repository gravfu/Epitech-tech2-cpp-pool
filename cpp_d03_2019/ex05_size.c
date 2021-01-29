/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex05_size
*/

#include <string.h>
#include "string.h"

static int size(const string_t *this)
{
    if (this && this->str)
        return strlen(this->str);
    return -1;
}