/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** castmania
*/

#include <stdio.h>
#include "castmania.h"

void exec_operation_div(division_t *op_div)
{
    integer_op_t *inte_op;
    decimale_op_t *dec_op;

    if (op_div->div_type == 0) {
        inte_op = op_div->div_op;
        printf("%d\n", inte_op->res);
    } else {
        dec_op = op_div->div_op;
        printf("%f\n", dec_op->res);
    }
}

void exec_operation(instruction_type_t instruction_type, void *data)
{
    instruction_t *tmp = data;
    addition_t *op_ad;
    division_t *op_div;

    if (instruction_type == ADD_OPERATION) {
        op_ad = tmp->operation;
        exec_add(op_ad);
        if (tmp->output_type == VERBOSE)
            printf("%d\n", op_ad->add_op.res);
    }
    if (instruction_type == DIV_OPERATION) {
        op_div = tmp->operation;
        exec_div(op_div);
        if (tmp->output_type == VERBOSE)
            exec_operation_div(op_div);
    }
}

void exec_instruction(instruction_type_t instruction_type, void *data)
{
    int *tmp;
    float *tmp2;

    if (instruction_type == PRINT_INT) {
        tmp = data;
        printf("%d\n", *tmp);
    } else if (instruction_type == PRINT_FLOAT) {
        tmp2 = data;
        printf("%f\n", *tmp2);
    } else
        exec_operation(instruction_type, data);
}