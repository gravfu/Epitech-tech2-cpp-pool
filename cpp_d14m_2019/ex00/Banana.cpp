/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Banana
*/

#include "Banana.hpp"

Banana::Banana() : Fruit(5)
{
}

Banana::~Banana()
{
}

std::string Banana::getName() const
{
    return "banana";
}