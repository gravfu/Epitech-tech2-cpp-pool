/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_del
*/

#include <unistd.h>
#include <stdlib.h>
#include "generic_list.h"

bool list_del_elem_at_front(list_t *front_ptr)
{
    node_t *tmp = *front_ptr;

    if (tmp == NULL)
        return false;
    *front_ptr = (*front_ptr)->next;
    tmp->next = NULL;
    if (tmp != NULL)
        free(tmp);
    return true;
}

bool list_del_elem_at_back(list_t *front_ptr)
{
    if (*front_ptr == NULL)
        return false;
    if (!list_del_elem_at_back(&((*front_ptr)->next)))
        return list_del_elem_at_front(&((*front_ptr)->next));
    else
        return true;
}

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    if (position == 0)
        return list_del_elem_at_front(front_ptr);
    if (*front_ptr == NULL && position != 0)
        return false;
    return list_del_elem_at_position(&((*front_ptr)->next),
                                            position - 1);
}

bool list_del_node(list_t *front_ptr, node_t *node_ptr)
{
    if (*front_ptr == node_ptr)
        return list_del_elem_at_front(front_ptr);
    if (*front_ptr == NULL)
        return false;
    return list_del_node(&((*front_ptr)->next), node_ptr);
}

void list_clear(list_t *front_ptr)
{
    if (*front_ptr != NULL) {
        list_clear(&(*front_ptr)->next);
        free(*front_ptr);
        *front_ptr = NULL;
    }
}