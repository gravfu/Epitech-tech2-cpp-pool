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
    _terror = Error();
}

Toy::Toy(const ToyType type, const std::string &toy_name, const std::string &filename) : _type(type)
{
    name = toy_name;
    _terror = Error();
    setAscii(filename);
}

Toy::Toy(const Toy &cpyptr) : _type(cpyptr._type)
{
    _picture = cpyptr._picture;
    name = cpyptr.name;
    _terror = cpyptr._terror;
}

Toy &Toy::operator=(const Toy &cpyptr)
{
    _picture = cpyptr._picture;
    name = cpyptr.name;
    _terror = cpyptr._terror;
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
    if (this->_picture.getPictureFromFile(name) == false) {
        _terror.type = Error::PICTURE;
        return false;
    }
    return true;
}

std::string Toy::getAscii() const
{
    return _picture.data;
}

void Toy::speak(const std::string &statement) const
{
    std::cout << name << " \"" << statement << "\"" << std::endl;
}

std::ostream &operator<<(std::ostream &a, const Toy &baba)
{
    return a << baba.getName() << std::endl << baba.getAscii() << std::endl;
}

Toy &Toy::operator<<(const std::string &out)
{
    this->_picture.data = out;
    return *this;
}

std::string Toy::Error::what() const 
{
    if (type == PICTURE)
        return "bad new illustration";
    if (type == SPEAK)
        return "wrong mode";
    return "";
}

std::string Toy::Error::where() const
{
    if (type == PICTURE)
        return "setAscii";
    if (type == SPEAK)
        return "speak_es";
    return "";
}

Toy::Error::Error()
{
    type = UNKNOWN;
}

Toy::Error::~Error()
{
}

Toy::Error Toy::getLastError() const
{
    return _terror;
}

bool Toy::speak_es(const std::string &statement)
{
    (void) statement;
    _terror.type = Error::SPEAK;
    return false;
}