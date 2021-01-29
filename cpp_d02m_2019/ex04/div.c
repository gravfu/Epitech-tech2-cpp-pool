/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** div
*/

#include "castmania.h"

int integer_div(int a, int b)
{
    if (b == 0)
        return 0;
    return a / b;
}

float decimale_div(int a, int b)
{
    if (b == 0)
        return 0;
    return (float) a / b;
}

void exec_div(division_t *operation)
{
    integer_op_t *inte_op;
    decimale_op_t *dec_op;

    if (operation->div_type == 0) {
        inte_op = operation->div_op;
        inte_op->res = integer_div(inte_op->a, inte_op->b);
    } else {
        dec_op = operation->div_op;
        dec_op->res = decimale_div(dec_op->a, dec_op->b);
    }
}