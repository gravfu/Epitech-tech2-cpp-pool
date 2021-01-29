/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex06_copy
*/

#include <string.h>
#include "string.h"

static size_t copy(const string_t *this, char *s, size_t n, size_t pos)
{
    size_t i;

    if (strlen(this->str) >= pos) {
        s = NULL;
        return 0;
    }
    for (i = 0; i < n && this->str[pos + i] != '\0'; i++) {
        s[i] = this->str[i + pos];
    }
    if (i < n)
        s[i] = '\0';
    return i;
}