/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#include "DroidMemory.hpp"

DroidMemory::DroidMemory()
{
    _Exp = 0;
    _Fingerprint = rand();
    BattleData = nullptr;
}

DroidMemory::~DroidMemory()
{
}

size_t DroidMemory::getFingerprint() const
{
    return _Fingerprint;
}
void DroidMemory::setFingerprint(size_t finger)
{
    _Fingerprint = finger;
}

size_t DroidMemory::getExp() const
{
    return _Exp;
}
void DroidMemory::setExp(size_t exp)
{
    this->_Exp = exp;
}

DroidMemory& DroidMemory::operator<<(const DroidMemory &mem)
{
    this->setExp(getExp() + mem.getExp());
    this->setFingerprint(this->_Fingerprint^mem._Fingerprint);
    return *this;
}

DroidMemory const & DroidMemory::operator>>(DroidMemory& mem) const
{
    mem.setExp(this->getExp() + mem.getExp());
    mem.setFingerprint(mem._Fingerprint^this->_Fingerprint);
    return mem;
}

DroidMemory & DroidMemory::operator+=(const DroidMemory& mem)
{
    this->setExp(mem.getExp() + getExp());
    this->setFingerprint(this->_Fingerprint^mem._Fingerprint);
    return *this;
}

DroidMemory &  DroidMemory::operator+=(size_t mem)
{
    this->setExp(this->getExp() + mem);
    this->setFingerprint(this->getFingerprint()^mem);
    return *this;
}

DroidMemory &  DroidMemory::operator+(const DroidMemory& mem) const
{
    DroidMemory *tmp = new DroidMemory;
    tmp->_Exp = mem.getExp() + this->getExp();
    tmp->setFingerprint(this->getFingerprint()^mem.getFingerprint());
    return *tmp;
}

DroidMemory &  DroidMemory::operator+(size_t mem) const
{
    DroidMemory *tmp = new DroidMemory;
    tmp->setExp(mem + this->getExp());
    tmp->setFingerprint(this->getFingerprint()^mem);
    return *tmp;
}

std::ostream &operator<<(std::ostream &a, const DroidMemory &baba)
{
    return a << "DroidMemory '" << baba.getFingerprint() << "', " << baba.getExp();
}