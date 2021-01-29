/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Ratatouille
*/

#include "Ratatouille.hpp"

Ratatouille::Ratatouille ()
{
}

Ratatouille::Ratatouille(Ratatouille const &other)
{
    if (this != &other)
    {
        _stream.str(std::string());
        _stream.clear();
        _stream << other._stream.str();
    }
}

Ratatouille::~Ratatouille()
{
}

Ratatouille &Ratatouille::operator=(const Ratatouille & rhs)
{
    if (&rhs != this){
        _stream.str(std::string());
        _stream.clear();
        _stream << rhs._stream.str();
    }
    return *this;
}

Ratatouille &Ratatouille::addVegetable(unsigned char c)
{
    _stream << c;
    return *this;
}

Ratatouille &Ratatouille::addCondiment(unsigned int i)
{
    _stream << i;
    return *this;
}

Ratatouille &Ratatouille::addSpice(double d)
{
    _stream << d;
    return *this;
}

Ratatouille &Ratatouille::addSauce(const std::string &str)
{
    _stream << str;
    return *this;
}

std :: string Ratatouille::kooc()
{
    return _stream.str();
}