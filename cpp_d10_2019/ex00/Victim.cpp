/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim
*/

#include "Victim.hpp"

Victim::Victim(const std::string &name) : _name(name)
{
    std::cout << "Some random victim called " << _name << " just popped!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return _name;
}

std::ostream &operator<<(std::ostream &a, const Victim &b)
{
    return a << "I'm " << b.getName() << " and I like otters!" << std::endl;
}

void Victim::getPolymorphed()const
{
    std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}