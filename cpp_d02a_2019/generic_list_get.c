/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_get
*/


#include <unistd.h>
#include <stdlib.h>
#include "generic_list.h"

void *list_get_elem_at_front(list_t list)
{
    if (list == NULL)
        return 0;
    return list->value;
}

void *list_get_elem_at_back(list_t list)
{
    if (list == NULL)
        return 0;
    if (list->next == NULL)
        return list->value;
    else
        return list_get_elem_at_back(list->next);
}

void *list_get_elem_at_position(list_t list, unsigned int position)
{
    if (position == 0)
        return list_get_elem_at_front(list);
    if (list == NULL && position != 0)
        return 0;
    return list_get_elem_at_position(list->next, position - 1);
}