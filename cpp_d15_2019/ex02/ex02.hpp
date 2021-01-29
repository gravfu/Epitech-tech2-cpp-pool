/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex02
*/

#ifndef EX02_HPP_
#define EX02_HPP_

#include <iostream>

template <typename T>
T min(T a, T b)
{
    std::cout << "template min" << std::endl;
    if (a <= b)
        return a;
    return b;
}

int min(const int a, const int b)
{
    std::cout << "non-template min" << std::endl;
    if (a <= b)
        return a;
    return b;
}

template <typename T>
T templateMin(const T *tab, const int size)
{
    if (size == 1)
        return tab[0];
    T tmp;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            tmp = tab[0];
        else
            tmp = min<T>(tmp, tab[i]);
    }
    return tmp;
}

int nonTemplateMin(const int *tab, const int size)
{
    if (size == 1)
        return tab[0];
    int tmp;
    for (int i = 0; i < size; i++)
    {
        if (i == 0)
            tmp = tab[0];
        else
            tmp = min(tmp, tab[i]);
    }
    return tmp;
}

#endif /* !EX02_HPP_ */
