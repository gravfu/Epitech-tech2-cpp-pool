/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int level) : Character(name, level), Warrior(name, level), Priest(name, level)
{
    Strength = 9;
    Stamina = 10;
    Intelligence = 10;
    Spirit = 10;
    Agility = 2;
    std::cout << "the light falls on " << name << std::endl;
}

Paladin::~Paladin()
{
}


int Paladin::CloseAttack()
{
    return Warrior::CloseAttack();
}

void Paladin::Heal()
{
    Priest::Heal();
}

int Paladin::RangeAttack()
{
    return Priest::RangeAttack();
}

void Paladin::RestorePower()
{
    return Warrior::RestorePower();
}

int Paladin::Intercept()
{
    return Warrior::RangeAttack();
}