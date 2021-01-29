/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** map
*/

#include <stdlib.h>
#include <unistd.h>
#include "map.h"

unsigned int map_get_size(map_t map)
{
    if (map == NULL)
        return 0;
    return (1 + map_get_size(map->next));
}

bool map_is_empty(map_t map)
{
    if (map == NULL)
        return true;
    return false;
}

key_comparator_t key_cmp_container(bool store, key_comparator_t new_key_cmp)
{
    static key_comparator_t a;
    if (store == true)
        a = new_key_cmp;
    return a;
}

int pair_comparator(void *first, void *second)
{
    pair_t *a = first;
    pair_t *b = second;

    return (a->key - b->key);
}

bool map_add_elem(map_t *map_ptr, void *key, void *value,
                key_comparator_t key_cmp)
{
    pair_t *pair = malloc(sizeof(pair_t));
    pair->key = key;
    pair->value = value;
    map_t map;
    map = list_get_first_node_with_value(*map_ptr, pair, key_cmp);
    if (map == NULL)
        return list_add_elem_at_front(map_ptr, pair);
    if (map->value)
        free(map->value);
    map->value = pair;
    return true;
}