/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex12_to_int
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

int to_int(const string_t *this)
{
    return atoi(this->str);
}