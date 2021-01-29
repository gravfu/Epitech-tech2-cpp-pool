/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** ex11_insert
*/

#include <stdlib.h>
#include <string.h>
#include "string.h"

static void insert_c(string_t *this, size_t pos, const char *str)
{
    char *tmp = malloc(sizeof(char) * (strlen(this->str) + strlen(str) + 1));
    strcat(tmp, this->str);
    if (strlen(this->str) >= pos)
        strcat(tmp, str);
    else {
        strcpy(&tmp[pos], str);
    }
    if (this->str)
        free(this->str);
    this->str = tmp;
}

static void insert_s(string_t *this, size_t pos, const string_t *str)
{
    insert_c(this, pos, str->str);
}