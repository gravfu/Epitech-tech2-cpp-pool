/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
    _AP = 40;
    _weapon = nullptr;
}

Character::~Character()
{

}

void Character::recoverAP()
{
    _AP += 10;
    if (_AP > 40)
        _AP = 40;
}

void Character::equip(AWeapon *weapon)
{
    if (!weapon)
        return;
    _weapon = weapon;
}

void Character::attack(AEnemy *enemy)
{
    if (!_weapon || !enemy || _AP < _weapon->getAPCost())
        return;
    _AP -= _weapon->getAPCost();
    std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
    enemy->takeDamage(_weapon->getDamage());
    _weapon->attack();
    if (enemy->getHP() <= 0) {
        delete enemy;
        enemy = nullptr;
    }
}

std :: string const Character::getName() const
{
    return _name;
}

int Character::getAP() const
{
    return _AP;
}

AWeapon *Character::getWeapon() const
{
    return _weapon;
}

std::ostream &operator<<(std::ostream &a, const Character &baba)
{
    if (baba.getWeapon() == nullptr)
        return a << baba.getName() << " has " << baba.getAP() << " AP and is unarmed" << std::endl;
    return a << baba.getName() << " has " << baba.getAP() << " AP and wields a " << baba.getWeapon()->getName() << std::endl;
}