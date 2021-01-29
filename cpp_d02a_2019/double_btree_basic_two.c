/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** double_btree_del
*/

#include <stdlib.h>
#include "double_btree.h"

bool double_btree_delete(double_btree_t *root_ptr)
{
    if (*root_ptr == NULL)
        return false;
    double_btree_delete(&(*root_ptr)->left);
    double_btree_delete(&(*root_ptr)->right);
    free(*root_ptr);
    return true;
}

double double_btree_get_max_value(double_btree_t tree)
{
    double left;
    double right;
    double res;

    if (tree == NULL)
        return 0;
    left = double_btree_get_max_value(tree->left);
    right = double_btree_get_max_value(tree->right);
    if (left < right)
        res = right;
    else
        res = left;
    if (tree->value > res)
        res = tree->value;
    return res;
}

double double_btree_get_min_value(double_btree_t tree)
{
    double left;
    double right;
    double res;

    if (tree == NULL)
        return 0;
    if (tree->left != NULL)
        left = double_btree_get_min_value(tree->left);
    if (tree->right != NULL)
        right = double_btree_get_min_value(tree->right);
    if (tree->left)
        res = left;
    if ((tree->right && !(tree->left)) || (tree->left && left > right))
        res = right;
    if (((tree->right || tree->left) && tree->value < res) ||
        (!(tree->right) && !(tree->left)))
        res = tree->value;
    return res;
}