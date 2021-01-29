/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex03_at
*/

#include <string.h>
#include "string.h"

static char at(const string_t *this, size_t pos)
{
    size_t len = strlen(this->str);

    if (pos >= len)
        return -1;
    return (this->str[pos]);
}