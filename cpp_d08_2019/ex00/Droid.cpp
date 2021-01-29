/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#include "Droid.hpp"

Droid::Droid(std::string serial) : _Attack(25), _Toughness(15) 
{
    _Id = serial;
    _Energy = 50;
    _Status = new std::string("Standing by");
    //_Status = "Standing by";
    std::cout << "Droid '" << _Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &Droids) : _Attack(25), _Toughness(Droids._Toughness)
{
    _Id = Droids._Id;
    _Energy = Droids._Energy;
    _Status = new std::string(*Droids.getStatus());
    std::cout << "Droid '" << _Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << _Id << "' Destroyed" << std::endl;
    delete _Status;
}

std::string Droid::getId() const
{
    return _Id;
}

size_t Droid::getEnergy() const
{
    return _Energy;
}

std::string *Droid::getStatus() const
{
    return _Status;
}

size_t Droid::getAttack() const
{
    return _Attack;
}

size_t Droid::getToughness() const
{
    return _Toughness;
}

void Droid::setId(std::string id)
{
    _Id = id;
}

void Droid::setEnergy(size_t nrj)
{
    if (nrj > 100)
        _Energy = 100;
    else
        _Energy = nrj;
}

void Droid::setStatus(std::string *status)
{
    delete _Status;
    _Status = new std::string(*status);
}

Droid *Droid::operator<<(size_t& out)
{
    size_t tmp = _Energy + out;
    if (tmp > _Energy && _Energy < 100) {
        if (tmp >= 100) {
            out -= 100 - _Energy;
            _Energy = 100;
        } else {
            _Energy += out;
            out = 0;
        }
    }
    return this;
}

bool Droid::operator!=(const Droid& a) const
{
    if (a._Attack != this->_Attack || a._Energy != this->_Energy
        ||  a._Id != this->_Id     || *(a._Status) != *(this->_Status)
        ||  a._Toughness != this->_Toughness)
            return true;
    return false;
}

bool Droid::operator==(const Droid& a) const
{
    if (a._Attack == this->_Attack && a._Energy == this->_Energy
        &&  a._Id == this->_Id         && *(a._Status) == *(this->_Status)
        &&  a._Toughness == this->_Toughness)
            return true;
    return false;
}

std::ostream &operator<<(std::ostream &a, const Droid &baba)
{
    //std::cout << baba.getEnergy() << std::endl;
    return a << "Droid '" << baba.getId() << "', " << *baba.getStatus() << ", " << baba.getEnergy();//<< std::endl ;
}

Droid& Droid::operator=(const Droid& a)
{
    this->setEnergy(a.getEnergy());
    this->setId(a.getId());
    delete this->_Status;
    this->_Status = new std::string(*(a._Status));
    return *this;
}
