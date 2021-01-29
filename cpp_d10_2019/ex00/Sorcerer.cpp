/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer
*/

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return _name;
}
std::string Sorcerer::getTitle() const
{
    return _title;
}

std::ostream &operator<<(std::ostream &a, const Sorcerer &b)
{
    return a << "I am " << b.getName() << ", " << b.getTitle() << ", and I like ponies!" << std::endl;
}

void Sorcerer::polymorph(const Victim &victim) const
{
    victim.getPolymorphed();
}