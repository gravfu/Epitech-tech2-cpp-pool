/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = maxWarp;
    _location = _home;
    _shield = 100;
    _photonTorpedo = torpedo;
    std::cout << "The ship USS " << this->_name <<" has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
    if (torpedo != 0)
        std::cout << "Weapons are set: " << torpedo << " torpedoes ready." << std::endl;
}

Federation::Starfleet::Ship::Ship()
{
    _length = 289;
    _width = 132;
    _name = "Entreprise";
    _maxWarp = 6;
    _location = _home;
    _shield = 100;
    _photonTorpedo = 0;
    std::cout << "The ship USS " << this->_name <<" has been finished." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
    std::cout << "It can go to Warp " << _maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship() {}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << "USS " << _name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
    std::cout << "USS " << _name << ": The core is ";
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "stable";
    else
        std::cout << "unstable";
    std::cout << " at the time." << std::endl;
}


Federation::Ship::Ship(int length, int width, std::string name)
{
    _length = length;
    _width = width;
    _name = name;
    _maxWarp = 1;
    _location = _home;
    std::cout << "The independent ship " << this->_name <<" just finished its construction." << std::endl;
    std::cout << "It is " << _length << " m in length and " << _width << " m in width." << std::endl;
}

Federation::Ship::~Ship() {}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    _core = core;
    std::cout << _name << ": The core is set." << std::endl;
}

void Federation::Ship::checkCore()
{
    std::cout <<  _name << ": The core is ";
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "stable";
    else
        std::cout << "unstable";
    std::cout << " at the time." << std::endl;
}

Federation::Starfleet::Captain::Captain(std::string name)
{
    _name = name;
}

Federation::Starfleet::Captain::~Captain() {}

std::string Federation::Starfleet::Captain::getName()
{
    return _name;
}

int Federation::Starfleet::Captain::getAge()
{
    return _age;
}
void Federation::Starfleet::Captain::setAge(int age)
{
    _age = age;
}

void Federation::Starfleet::Ship::promote(Federation::Starfleet::Captain *captain)
{
    _captain = captain;
    std::cout << _captain->getName() << ": I'm glad to be the captain of the USS " << _name << "." << std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    _name = name;
    std::cout << "Ensign " << _name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign() {}


//EX02 Ship Federation

bool Federation::Ship::move (int warp , Destination d ) // set _location to d
{
    if (warp > _maxWarp)
        return false;
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    return true;
}

bool Federation::Ship::move (int warp ) // set _location to _home
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
bool Federation::Ship::move ( Destination d ) // set _location to d
{
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = d;
    return true;
}

bool Federation::Ship::Ship::move () // set _location to _home
{
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = _home;
    return true;
}

// EX02 Ship Starship

bool Federation::Starfleet::Ship::move (int warp , Destination d ) // set _location to d
{
    if (warp > _maxWarp)
        return false;
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = d;
    return true;
}

bool Federation::Starfleet::Ship::move (int warp)
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
bool Federation::Starfleet::Ship::move ( Destination d ) // set _location to d
{
    if (d == _location)
        return false;
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = d;
    return true;
}

bool Federation::Starfleet::Ship::move () // set _location to _home
{
    if (this->_core->checkReactor()->isStable() == false)
        return false;
    _location = _home;
    return true;
}


// WAR EX03

int Federation::Starfleet::Ship::getShield()
{
    return _shield;
}

void Federation::Starfleet::Ship::setShield(int shield)
{
    _shield = shield;
}

int Federation::Starfleet::Ship::getTorpedo()
{
    return _photonTorpedo;
}

void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    _photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship * target)
{
    int torpedoes = 1;
    if (_photonTorpedo - torpedoes < 0)
    {
        std::cout << _name << ": No enough torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
    } else {
        _photonTorpedo = _photonTorpedo - torpedoes;
        target->setShield(target->getShield() - (50 * torpedoes));
        if (_photonTorpedo > 0) {
            std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
        } else
            std::cout << _name << ": No more torpedo to fire, " << this->_captain->getName() << "!" << std::endl;
    }
}

void Federation::Starfleet::Ship::fire (int torpedoes , Borg :: Ship * target )
{
    (void) target;
    if (_photonTorpedo - torpedoes < 0)
    {
        std::cout << _name << ": No enough torpedoes to fire, " << this->_captain->getName() << "!" << std::endl;
    } else {
        _photonTorpedo = _photonTorpedo - torpedoes;
        target->setShield(target->getShield() - (50 * torpedoes));
        if (_photonTorpedo > 0) {
            std::cout << _name << ": Firing on target. " << _photonTorpedo << " torpedoes remaining." << std::endl;
        } else
            std::cout << _name << ": No more torpedo to fire, " << this->_captain->getName() << "!" << std::endl;
    }
}


WarpSystem::Core *Federation::Ship::getCore()
{
    return _core;
}
