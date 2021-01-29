/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#include "Warrior.hpp"

Warrior::Warrior(const std::string &name, int level, const std::string iniweapon) : Character(name, level), _weaponName(iniweapon)
{
    _Pv = 100;
    _Power = 100;
    Strength = 12;
    Stamina = 12;
    Intelligence = 6;
    Spirit = 5;
    Agility = 7;
    std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
}

Warrior::~Warrior()
{
}

int Warrior::CloseAttack ()
{

    if (_Power < 30) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 30;
    std::cout << _name << " strikes with his " << _weaponName << std::endl;
    return (20 + Strength);
}

int Warrior::RangeAttack ()
{
    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 10;
    Range = CLOSE;
    std::cout << _name << " intercepts" << std::endl;
    return (0);
}