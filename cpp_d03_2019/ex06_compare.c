/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex06_compare
*/

#include <string.h>
#include "string.h"

static int compare_s(const string_t * this, const string_t *str)
{
    return (strcmp(this->str, str->str));
}

static int compare_c(const string_t * this, const char *str)
{
    return (strcmp(this->str, str));
}