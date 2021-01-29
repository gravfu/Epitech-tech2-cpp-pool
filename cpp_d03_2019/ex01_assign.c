/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** assign
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

static void assign_s(string_t *this, const string_t *str)
{
    if (this->str != NULL)
        free(this->str);
    this->str = strdup(str->str);
}

static void assign_c(string_t *this, const char *s)
{
    if (this->str != NULL)
        free(this->str);
    this->str = strdup(s);
}
