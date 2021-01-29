/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Woody
*/

#include "Woody.hpp"

Woody::Woody(const std::string &name, const std::string &ascii) : Toy(WOODY, name, ascii)
{
}

Woody::~Woody()
{
}

bool Woody::speak(const std::string &statement)
{
    std::cout << "WOODY: " << name << " \"" << statement << "\"" << std::endl;
    return true;
}