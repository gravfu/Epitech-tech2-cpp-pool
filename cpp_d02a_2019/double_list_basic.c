/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** abc
*/

#include <stdio.h>
#include "double_list.h"

unsigned int double_list_get_size(double_list_t list)
{
    if (list == NULL)
        return 0;
    return (1 + double_list_get_size(list->next));
}

bool double_list_is_empty(double_list_t list)
{
    if (list == NULL)
        return true;
    return false;
}

void double_list_dump(double_list_t list)
{
    if (list != NULL) {
        printf("%f\n", list->value);
        double_list_dump(list->next);
    }
}