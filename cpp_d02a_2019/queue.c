/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** queue
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "queue.h"
#include "generic_list.h"

unsigned int queue_get_size(queue_t queue)
{
    if (queue == NULL)
        return 0;
    return (1 + queue_get_size(queue->next));
}

bool queue_is_empty(queue_t queue)
{
    if (queue == NULL)
        return true;
    return false;
}

bool queue_push(queue_t *queue_ptr, void *elem)
{
    if (*queue_ptr == NULL) {
        return list_add_elem_at_front(queue_ptr, elem);
    }
    return list_add_elem_at_back(&((*queue_ptr)->next), elem);
    return true;
}

bool queue_pop(queue_t *queue_ptr)
{
    return list_del_elem_at_front(queue_ptr);
}

void *queue_front(queue_t queue)
{
    if (queue == NULL)
        return NULL;
    return queue->value;
}