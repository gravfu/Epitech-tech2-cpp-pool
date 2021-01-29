/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon
*/

#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : _name(name)
{
    _apcost = apcost;
    _damage_points = damage;
}

AWeapon::~AWeapon()
{
}

int AWeapon::getAPCost() const
{
    return _apcost;
}

std::string const AWeapon::getName() const
{
    return _name;
}

int AWeapon::getDamage() const
{
    return _damage_points;
}