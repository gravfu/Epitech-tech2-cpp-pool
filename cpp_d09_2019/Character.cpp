/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name, int level)
{
    _name = name;
    _level = level;
    _Pv = 100;
    _Power = 100;
    Strength = 5;
    Stamina = 5;
    Intelligence = 5;
    Spirit = 5;
    Agility = 5;
    std::cout << _name << " Created" << std::endl;
}

Character::~Character()
{
}

const std::string &Character::getName() const
{
    return _name;
}

int Character::getLvl() const
{
    return _level;
}

int Character::getPv() const
{
    return _Pv;
}
int Character::getPower() const
{
    return _Power;
}

int Character::CloseAttack ()
{
    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return 0;
    }
    _Power -= 10;
    std::cout << _name << " strikes with a wooden stick" << std::endl;
    return (10 + Strength);
}

void Character::Heal ()
{
    _Pv += 50;
    if (_Pv > 100)
        _Pv = 100;
    std::cout << _name << " takes a potion" << std::endl;
}

int Character::RangeAttack ()
{
    if (_Power < 10) {
        std::cout << _name << " out of power" << std::endl;
        return 0;
    }
    _Power -= 10;
    std::cout << _name << " tosses a stone" << std::endl;
    return (5 + Strength);
}

void Character::RestorePower ()
{
    _Power = 100;
    std::cout << _name << " eats" << std::endl;
}

void Character::TakeDamage (int damage)
{
    _Pv -= damage;
    if (_Pv > 0)
        std::cout << _name << " takes " << damage << " damage" << std::endl;
    if (_Pv <= 0)
        std::cout << _name << " out of combat" << std::endl;
}