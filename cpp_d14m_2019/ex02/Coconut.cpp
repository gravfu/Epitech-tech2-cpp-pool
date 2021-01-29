/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Coconut
*/

#include "Coconut.hpp"

Coconut::Coconut() : Fruit(15)
{
}

Coconut::~Coconut()
{
}

std::string Coconut::getName() const
{
    return "coconut";
}