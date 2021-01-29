/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy() : _type(BASIC_TOY)
{
    name = "toy";
    _picture = Picture();
}

Toy::Toy(const ToyType type, const std::string &toy_name, const std::string &filename) : _type(type)
{
    _picture = Picture(filename);
    name = toy_name;
}

Toy::Toy(const Toy &cpyptr) : _type(cpyptr._type)
{
    _picture = cpyptr._picture;
    name = cpyptr.name;
}

Toy &Toy::operator=(const Toy &cpyptr)
{
    _picture = cpyptr._picture;
    name = cpyptr.name;
    return *this;
}

Toy::~Toy()
{
}

Toy::ToyType Toy::getType() const
{
    return  _type;
}

std::string Toy::getName() const
{
    return name;
}

void Toy::setName(const std::string newname)
{
    name = newname;
}

bool Toy::setAscii(const std::string &name)
{
    return this->_picture.getPictureFromFile(name);
}

std::string Toy::getAscii() const
{
    return _picture.data;
}

void Toy::speak(const std::string &statement) const
{
    std::cout << name << " \"" << statement << "\"" << std::endl;
}