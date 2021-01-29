/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Mage
*/

#include "Mage.hpp"

Mage::Mage(const std::string &name, int level) : Character(name, level)
{
    _Pv = 100;
    _Power = 100;
    Strength = 6;
    Stamina = 6;
    Intelligence = 12;
    Spirit = 11;
    Agility = 7;
    std::cout << _name << " teleported" << std::endl;
}

Mage::~Mage()
{
}

int Mage::CloseAttack ()
{

    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 10;
    Range = RANGE;
    std::cout << _name << " blinks" << std::endl;
    return 0;
}

void Mage::Heal ()
{
    _Pv += 50;
    if (_Pv > 100)
        _Pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

int Mage::RangeAttack ()
{
    if (_Power < 25) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 25;
    std::cout << _name << " launches a fire ball" << std::endl;
    return (20 + Spirit);
}

void Mage::RestorePower ()
{
    _Power += 50 + Intelligence;
    if (_Power > 100)
        _Power = 100;
    std::cout << _name << " takes a mana potion" << std::endl;
}