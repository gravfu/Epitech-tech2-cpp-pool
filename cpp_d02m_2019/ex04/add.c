/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** add
*/

#include <stdlib.h>
#include "castmania.h"

int normal_add(int a, int b)
{
    return a + b;
}

int absolute_add(int a, int b)
{
    return abs(a) + abs(b);
}

void exec_add(addition_t *operation)
{
    int (*div[2])(int, int);
    div[0] = normal_add;
    div[1] = absolute_add;
    operation->add_op.res = div[operation->add_type](operation->add_op.a,
                                operation->add_op.b);
}