/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex09_empty
*/

#include <string.h>
#include "string.h"

static int empty(const string_t *this)
{
    if (this->str && this->str[0] == '\0')
        return 1;
    return 0;
}