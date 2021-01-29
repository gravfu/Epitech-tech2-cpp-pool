/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_list_add
*/

#include <stdlib.h>
#include "double_list.h"

bool double_list_add_elem_at_front(double_list_t *front_ptr, double elem)
{
    doublelist_node_t *tmp = malloc(sizeof(doublelist_node_t));

    if (tmp == NULL)
        return false;
    tmp->next = *front_ptr;
    tmp->value = elem;
    *front_ptr = tmp;
    return true;
}

bool double_list_add_elem_at_back(double_list_t *front_ptr, double elem)
{
    if (*front_ptr == NULL) {
        return double_list_add_elem_at_front(front_ptr, elem);
    }
    return double_list_add_elem_at_back(&((*front_ptr)->next), elem);
}

bool double_list_add_elem_at_position(double_list_t *front_ptr, double elem,
                                        unsigned int position)
{
    if (position == 0)
        return double_list_add_elem_at_front(front_ptr, elem);
    if (*front_ptr == NULL && position != 0)
        return false;
    return double_list_add_elem_at_position(&((*front_ptr)->next),
                                        elem, position - 1);
}