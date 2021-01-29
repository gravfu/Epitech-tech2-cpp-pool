/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** mem_ptr
*/

#include <string.h>
#include <stdlib.h>
#include "mem_ptr.h"

void add_str(const char *str1, const char *str2, char **res)
{
    *res = malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));
    *res = strcat (*res, str1);
    *res = strcat (*res, str2);
}

void add_str_struct(str_op_t *str_op)
{
    add_str(str_op->str1, str_op->str2, &(str_op->res));
}