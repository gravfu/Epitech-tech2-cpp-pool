/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_add
*/

#include <stdlib.h>
#include <unistd.h>
#include "generic_list.h"

bool list_add_elem_at_front(list_t *front_ptr, void *elem)
{
    node_t *tmp = malloc(sizeof(node_t));

    if (tmp == NULL)
        return false;
    tmp->next = *front_ptr;
    tmp->value = elem;
    *front_ptr = tmp;
    return true;
}

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    if (*front_ptr == NULL) {
        return list_add_elem_at_front(front_ptr, elem);
    }
    return list_add_elem_at_back(&((*front_ptr)->next), elem);
}

bool list_add_elem_at_position(list_t *front_ptr, void *elem,
                                unsigned int position)
{
    if (position == 0)
        return list_add_elem_at_front(front_ptr, elem);
    if (*front_ptr == NULL && position != 0)
        return false;
    return list_add_elem_at_position(&((*front_ptr)->next),
                                        elem, position - 1);
}