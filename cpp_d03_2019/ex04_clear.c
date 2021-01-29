/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex04_clear
*/

#include <string.h>
#include "string.h"


static void clear(string_t *this)
{
    if (this && this->str)
        memset(this->str, 0, strlen(this->str));
}