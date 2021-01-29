/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** map_two
*/

#include <stdlib.h>
#include <unistd.h>
#include "map.h"

bool map_del_elem(map_t *map_ptr, void *key, key_comparator_t key_cmp)
{
    map_t map;
    pair_t *pair = malloc(sizeof(pair_t));
    pair->key = key;
    pair->value = NULL;
    map = list_get_first_node_with_value(*map_ptr, pair, key_cmp);
    if (map == NULL)
        return false;
    return list_del_node(map_ptr, map);
}

void * map_get_elem(map_t map, void *key, key_comparator_t key_cmp)
{
    pair_t *pair = malloc(sizeof(pair_t));
    pair->key = key;
    pair->value = NULL;
    map = list_get_first_node_with_value(map, pair, key_cmp);
    if (map == NULL)
        return NULL;
    if (map->value == NULL)
        return NULL;
    return ((pair_t *) map->value)->value;
}