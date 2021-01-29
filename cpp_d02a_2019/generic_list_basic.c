/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_basic
*/

#include <stdlib.h>
#include "generic_list.h"

unsigned int list_get_size(list_t list)
{
    if (list == NULL)
        return 0;
    return (1 + list_get_size(list->next));
}

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return true;
    return false;
}