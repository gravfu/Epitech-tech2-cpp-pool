/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy()
{
    name = "Toy";
    picture = new Picture("");
    this->_type = BASIC_TOY;
}

Toy::Toy(const ToyType type, const std::string &toy_name, const std::string &filename)
{
    picture = new Picture(filename);
    this->_type = type;
    name = toy_name;
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

bool Toy::setAscii(const std::string &name) const
{
    return this->picture->getPictureFromFile(name);
}

std::string &Toy::getAscii() const
{
    return this->picture->data;
}