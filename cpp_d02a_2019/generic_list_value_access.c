/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** generic_list_value_access
*/

#include <unistd.h>
#include "generic_list.h"

node_t *list_get_first_node_with_value(list_t list, void *value,
                            value_comparator_t val_comp)
{
    if (list == NULL)
        return NULL;
    if (val_comp(list->value, value) == 0)
        return list;
    return list_get_first_node_with_value(list->next, value,
                                            val_comp);
}

void list_dump(list_t list, value_displayer_t val_disp)
{
    if (list != NULL) {
        val_disp(list->value);
        list_dump(list->next, val_disp);
    }
}