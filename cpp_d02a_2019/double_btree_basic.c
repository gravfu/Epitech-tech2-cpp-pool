/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree_basic
*/

#include <stdlib.h>
#include "double_btree.h"

bool double_btree_is_empty(double_btree_t tree)
{
    if (tree == NULL)
        return true;
    return false;
}

unsigned int double_btree_get_size(double_btree_t tree)
{
    if (tree == NULL)
        return 0;
    return (1 + double_btree_get_size(tree->left) +
            double_btree_get_size(tree->right));
}

unsigned int double_btree_get_depth(double_btree_t tree)
{
    unsigned int left;
    unsigned int right;

    if (tree == NULL)
        return 0;
    left = 1 + double_btree_get_depth(tree->left);
    right = 1 + double_btree_get_depth(tree->right);
    if (left > right)
        return left;
    return right;
}

bool double_btree_create_node(double_btree_t *node_ptr, double value)
{
    double_btree_t node = malloc(sizeof(double_btree_t));

    if (node == NULL)
        return false;
    node->left = NULL;
    node->right = NULL;
    node->value = value;
    *node_ptr = node;
    return true;
}