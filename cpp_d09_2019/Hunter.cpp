/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#include "Hunter.hpp"

Hunter::Hunter(const std::string &name, int level) : Character(name, level), Warrior(name, level, "sword")
{
    Strength = 9;
    Stamina = 9;
    Intelligence = 5;
    Spirit = 6;
    Agility = 25;
    std::cout << _name << " is born from a tree" << std::endl;
}

Hunter::~Hunter()
{
}

void Hunter::RestorePower()
{
    _Power = 100;
    std::cout << _name << " meditates" << std::endl;
}

int Hunter::RangeAttack ()
{
    if (_Power < 25) {
        std::cout << _name << " out of power" << std::endl;
        return (0);
    }
    _Power -= 25;
    std::cout << _name << " uses his bow" << std::endl;
    return (20 + Agility);
}