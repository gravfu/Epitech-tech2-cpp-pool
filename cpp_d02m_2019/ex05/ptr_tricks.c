/*
** EPITECH PROJECT, 2020
** cpp_d02m_2019
** File description:
** ptr_tricks
*/

#include <stdio.h>
#include <stdlib.h>
#include "ptr_tricks.h"

int get_array_nb_elem(const int *ptr1, const int *ptr2)
{
    int tmp = ptr2 - ptr1;
    if (tmp < 0)
        tmp = -tmp;
    return tmp;
}

whatever_t *get_struct_ptr(const int *member_ptr)
{
    whatever_t tmp;
    int tmp2 = (void *) &(tmp.member) - (void *) &tmp;
    return (whatever_t *) ((void *) member_ptr - tmp2);
}