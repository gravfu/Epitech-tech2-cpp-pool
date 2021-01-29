/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list_get
*/

#include <stdlib.h>
#include "double_list.h"

double double_list_get_elem_at_front(double_list_t list)
{
    if (list == NULL)
        return 0;
    return list->value;
}

double double_list_get_elem_at_back(double_list_t list)
{
    if (list == NULL)
        return 0;
    if (list->next == NULL)
        return list->value;
    else
        return double_list_get_elem_at_back(list->next);
}

double double_list_get_elem_at_position(double_list_t list,
                                    unsigned int position)
{
    if (position == 0)
        return double_list_get_elem_at_front(list);
    if (list == NULL && position != 0)
        return 0;
    return double_list_get_elem_at_position(list->next, position - 1);
}

doublelist_node_t *double_list_get_first_node_with_value(double_list_t list,
                                                    double value)
{
    if (list == NULL)
        return NULL;
    if (list->value == value)
        return list;
    return double_list_get_first_node_with_value(list->next, value);
}