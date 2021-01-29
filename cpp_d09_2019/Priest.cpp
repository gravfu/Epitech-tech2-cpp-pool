/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int level) : Character(name, level), Mage(name, level)
{
    _Pv = 100;
    _Power = 100;
    Strength = 4;
    Stamina = 4;
    Intelligence = 42;
    Spirit = 21;
    Agility = 2;
    std::cout << _name << " enters in the order" << std::endl;
}

Priest::~Priest()
{
}

int Priest::CloseAttack ()
{

    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 10;
    Range = RANGE;
    std::cout << _name << " uses a spirit explosion" << std::endl;
    return (10 + Spirit);
}

void Priest::Heal ()
{
    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return;
    }
    _Pv += 70;
    _Power -= 10;
    if (_Pv > 100)
        _Pv = 100;
    std::cout << _name << " casts a little heal spell" << std::endl;
}