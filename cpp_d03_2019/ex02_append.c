/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** append
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "string.h"

static void append_s(string_t *this, const string_t *ap)
{
    char *tmp = malloc(sizeof(char) * (strlen(this->str)
                                        + strlen(ap->str) + 1));

    tmp = strcat(tmp, this->str);
    tmp = strcat(tmp, ap->str);
    if (this->str != NULL)
        free(this->str);
    this->str = tmp;
}

static void append_c(string_t *this, const char *ap)
{
    char *tmp = malloc(sizeof(char) * (strlen(this->str)
                                        + strlen(ap) + 1));

    tmp = strcat(tmp, this->str);
    tmp = strcat(tmp, ap);
    if (this->str != NULL)
        free(this->str);
    this->str = tmp;
}