/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list_del
*/

#include <stdlib.h>
#include "double_list.h"

bool double_list_del_elem_at_front(double_list_t *front_ptr)
{
    doublelist_node_t *tmp = *front_ptr;

    if (tmp == NULL)
        return false;
    *front_ptr = (*front_ptr)->next;
    tmp->next = NULL;
    if (tmp != NULL)
        free(tmp);
    return true;
}

bool double_list_del_elem_at_back(double_list_t *front_ptr)
{
    if (*front_ptr == NULL)
        return false;
    if (!double_list_del_elem_at_back(&((*front_ptr)->next)))
        return double_list_del_elem_at_front(&((*front_ptr)->next));
    else
        return true;
}

bool double_list_del_elem_at_position(double_list_t *front_ptr,
                                    unsigned int position)
{
    if (position == 0)
        return double_list_del_elem_at_front(front_ptr);
    if (*front_ptr == NULL && position != 0)
        return false;
    return double_list_del_elem_at_position(&((*front_ptr)->next),
                                            position - 1);
}