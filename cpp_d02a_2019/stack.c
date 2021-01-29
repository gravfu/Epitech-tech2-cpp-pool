/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** stack
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "stack.h"
#include "generic_list.h"

unsigned int stack_get_size(stack_t stack)
{
    if (stack == NULL)
        return 0;
    return (1 + stack_get_size(stack->next));
}

bool stack_is_empty(stack_t stack)
{
    if (stack == NULL)
        return true;
    return false;
}

bool stack_push(stack_t *stack_ptr, void *elem)
{
    node_t *tmp = malloc(sizeof(node_t));

    if (tmp == NULL)
        return false;
    tmp->next = *stack_ptr;
    tmp->value = elem;
    *stack_ptr = tmp;
    return true;
}

bool stack_pop(stack_t *stack_ptr)
{
    node_t *tmp = *stack_ptr;

    if (tmp == NULL)
        return false;
    *stack_ptr = (*stack_ptr)->next;
    tmp->next = NULL;
    if (tmp != NULL)
        free(tmp);
    return true;
}

void *stack_top(stack_t stack)
{
    if (stack == NULL)
        return NULL;
    return stack->value;
}