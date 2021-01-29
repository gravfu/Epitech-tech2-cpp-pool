/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex10_find
*/

#include <string.h>
#include "string.h"

int find_s(const string_t *this, const string_t *str, size_t pos)
{
    size_t i;

    if (strlen(this->str) >= pos || strlen(this->str) < strlen(str->str))
        return -1;
    for (i = 0; this->str[pos + i] != '\0' &&
                this->str[pos + i] == str->str[0]; i++) {
        if (strcmp(&(this->str[pos + i]), str->str) == 0)
            return (pos + i);
    }
    return (-1);
}

int find_c(const string_t *this, const char *str, size_t pos)
{
    size_t i;

    if (strlen(this->str) >= pos || strlen(this->str) < strlen(str))
        return -1;
    for (i = 0; this->str[pos + i] != '\0' &&
                this->str[pos + i] == str[0]; i++) {
        if (strcmp(&(this->str[pos + i]), str) == 0)
            return (pos + i);
    }
    return (-1);
}