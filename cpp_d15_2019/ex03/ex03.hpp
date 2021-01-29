/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex03
*/

#ifndef EX03_HPP_
#define EX03_HPP_

#include <iostream>

template <typename T>
void print(const T &elem)
{
    std::cout << elem << std::endl;
}

template <typename T>
void foreach(const T *tab, void (*func)(const T &), int size)
{
    for(int i = 0; i < size; i++)
    {
        func(tab[i]);
    }
}


#endif /* !EX03_HPP_ */
