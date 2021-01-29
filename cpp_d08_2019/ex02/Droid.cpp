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
    BattleData = new DroidMemory();
    std::cout << "Droid '" << _Id << "' Activated" << std::endl;
}

Droid::Droid(const Droid &Droids) : _Attack(Droids._Attack), _Toughness(Droids._Toughness)
{
    _Id = Droids._Id;
    _Energy = 50;
    _Status = new std::string(*Droids.getStatus());
    BattleData = Droids.BattleData;
    std::cout << "Droid '" << _Id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid()
{
    std::cout << "Droid '" << _Id << "' Destroyed" << std::endl;
    delete _Status;
    delete BattleData;
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

void Droid::operator<<(size_t& out)
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
}

bool Droid::operator!=(const Droid& a) const
{
    if (*(this->_Status) != *(a._Status))
        return true;
    return false;
}

bool Droid::operator==(const Droid& a) const
{
    if (*(a._Status) == *(this->_Status))
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
    this->setEnergy(50);
    this->setId(a.getId());
    this->setStatus(a.getStatus());
    this->BattleData = a.BattleData;
    return *this;
}

DroidMemory * Droid::getBattleData() const
{
    return BattleData;
}

void Droid::setBattleData(DroidMemory *ba)
{
    BattleData = ba;
}

bool Droid::operator()(const std::string *str, size_t xp)
{
    delete this->_Status;

    if (_Energy > 10) {
        _Energy -= 10;
        //std::cout << "0: " << this->BattleData->getExp() << std::endl;
        //std::cout << this->BattleData->getExp() << std::endl;
        if (this->BattleData->getExp() >= xp) {
            //std::cout << "1: " << this->BattleData->getExp() << std::endl;
            this->BattleData->setExp(this->BattleData->getExp() + (xp / 2));
            this->_Status = new std::string(*str + " - Completed!");
            return true;
        }
        this->_Status = new std::string(*str + " - Failed!");
        this->BattleData->setExp(this->BattleData->getExp() + xp);
        //std::cout << this->BattleData->getExp() << std::endl;
        return false;
    }
    _Energy = 0;
    //std::cout << "1: " << _Energy << std::endl;
    this->_Status = new std::string("Battery Low");
    return false;
}