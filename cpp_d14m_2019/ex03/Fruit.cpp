/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(int vitamin) : _name("")
{
    _vitamins = vitamin;
}

Fruit::~Fruit()
{
}

int Fruit::getVitamins() const
{
    return _vitamins;
}