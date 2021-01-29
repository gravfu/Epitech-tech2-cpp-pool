/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex01
*/

#ifndef EX01_HPP_
#define EX01_HPP_

#include <string.h>

template <typename T>

int compare(const T &a, const T &b)
{
    if (a == b)
        return 0;
    if (a < b)
        return -1;
    return 1;
}

template <typename>
int compare(const char *a, const char *b)
{
    int tmp = strcmp(a, b);
    if (tmp == 0)
        return 0;
    if (tmp < 0)
        return -1;
    return 1;
}

#endif /* !EX01_HPP_ */
