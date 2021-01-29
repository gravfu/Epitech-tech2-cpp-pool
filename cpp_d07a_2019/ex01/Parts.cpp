/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#include "Parts.hpp"

// Arms

Arms::Arms(std::string serial , bool functional)
{
    _serial = serial;
    _functional = functional;
}

Arms::~Arms()
{

}

bool Arms::isFunctional() const
{
    return _functional;
}
std::string Arms::serial()
{
    return _serial;
}

void Arms::informations() const
{
    std::cout << "[Parts] " << "Arms " << _serial  << " status : "  << (isFunctional() ? "OK" : "KO") << std::endl;
}

// Legs

Legs::Legs(std::string serial, bool functional)
{
    _serial = serial;
    _functional = functional;
}

Legs::~Legs()
{

}

bool Legs::isFunctional() const
{
    return _functional;
}
std::string Legs::serial()
{
    return _serial;
}

void Legs::informations() const
{
    std::cout << "[Parts] " << " Legs " << _serial  << " status : "  << (isFunctional() ? "OK" : "KO") << std::endl;
}

// Head:

Head::Head(std::string serial, bool functional)
{
    _serial = serial;
    _functional = functional;
}

Head::~Head()
{

}

bool Head::isFunctional() const
{
    return _functional;
}
std::string Head::serial()
{
    return _serial;
}

void Head::informations() const
{
    std::cout << "[Parts] " << " Head " << _serial  << " status : "  << (isFunctional() ? "OK" : "KO") << std::endl;
}