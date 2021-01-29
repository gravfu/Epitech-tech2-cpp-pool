/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Borg
*/

#include <iostream>
#include "Borg.hpp"

Borg::Ship::Ship(int weaponFrequency, short repair)
{
    _shield = 100;
    _weaponFrequency = weaponFrequency;
    _repair = repair;
    _location = _home;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl;
    std::cout << "Your biological characteristics and technologies will be assimilated." << std::endl;
    std::cout << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
}

void Borg::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "Everything is in order." << std::endl;
    else
        std::cout << "Critical failure imminent." << std::endl;
}

bool Borg::Ship::move (int warp , Destination d ) // set _location to d
{
    if (warp > _maxWarp)
        return false;
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    return true;
}

bool Borg::Ship::move (int warp ) // set _location to _home
{
    if (warp > _maxWarp)
        return false;
    if (_home == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = _home;
    return true;
}
bool Borg::Ship::move ( Destination d ) // set _location to d
{
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = d;
    return true;
}

bool Borg::Ship::move () // set _location to _home
{
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = _home;
    return true;
}

int Borg::Ship::getShield ()
{
    return _shield;
}

void Borg::Ship::setShield (int shield )
{
    _shield = shield;
}

int Borg::Ship::getWeaponFrequency ()
{
    return _weaponFrequency;
}

void Borg::Ship::setWeaponFrequency (int frequency )
{
    _weaponFrequency = frequency;
}

short Borg::Ship::getRepair ()
{
    return _repair;
}

void Borg::Ship::setRepair ( short repair )
{
    _repair = repair;
}

void Borg::Ship::fire ( Federation :: Starfleet :: Ship * target )
{
    target->setShield(target->getShield() - _weaponFrequency);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::fire ( Federation :: Ship * target )
{
    target->getCore()->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << _weaponFrequency << "GW frequency." << std::endl;
}

void Borg::Ship::repair ()
{
    if (_repair > 0) {
        _shield = 100;
        _repair = _repair - 1;
        std:: cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    } else {
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
    }
}