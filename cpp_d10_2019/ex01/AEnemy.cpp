/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AEnemy
*/

#include "AEnemy.hpp"

AEnemy::AEnemy(int hp, const std::string &type) : _type(type)
{
    _hp = hp;
}

AEnemy::~AEnemy()
{
}

void AEnemy::takeDamage(int damage)
{
    if (damage > 0)
        _hp -= damage;
}

std::string const AEnemy::getType() const
{
    return _type;
}

int AEnemy::getHP() const
{
    return _hp;
}