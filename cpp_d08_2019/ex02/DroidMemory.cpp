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

DroidMemory::DroidMemory(const DroidMemory& dmo)
{
    _Exp = dmo._Exp;
    _Fingerprint = dmo._Fingerprint;
    BattleData = dmo.BattleData;
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

DroidMemory& DroidMemory::operator=(const DroidMemory& a)
{
    this->BattleData = a.BattleData;
    this->_Fingerprint = a._Fingerprint;
    this->_Exp = a._Exp;
    return *this;
}

// Compare with DroidMemory

bool DroidMemory::operator!=(const DroidMemory& a) const
{
    if (a._Exp != this->_Exp || a._Fingerprint != this->_Fingerprint)
        return true;
    return false;
}

bool DroidMemory::operator==(const DroidMemory& a) const
{
    if (a._Exp == this->_Exp && a._Fingerprint == this->_Fingerprint)
            return true;
    return false;
}

bool DroidMemory::operator<(const DroidMemory& a) const
{
    if (this->_Exp < a._Exp)
        return true;
    return false;
}

bool DroidMemory::operator>(const DroidMemory& a) const
{
    if (this->_Exp > a._Exp)
        return true;
    return false;
}

bool DroidMemory::operator<=(const DroidMemory& a) const
{
    if (this->_Exp <= a._Exp)
        return true;
    return false;
}

bool DroidMemory::operator>=(const DroidMemory& a) const
{
    if (this->_Exp >= a._Exp)
        return true;
    return false;
}

// Compare with size_t

bool DroidMemory::operator!=(const size_t a) const
{
    if (a != this->_Exp || a != this->_Fingerprint)
        return true;
    return false;
}

bool DroidMemory::operator==(const size_t a) const
{
    if (a == this->_Exp && a == this->_Fingerprint)
            return true;
    return false;
}

bool DroidMemory::operator<(const size_t a) const
{
    if (this->_Exp < a)
        return true;
    return false;
}

bool DroidMemory::operator>(const size_t a) const
{
    if (this->_Exp > a)
        return true;
    return false;
}

bool DroidMemory::operator<=(const size_t a) const
{
    if (this->_Exp <= a)
        return true;
    return false;
}

bool DroidMemory::operator>=(const size_t a) const
{
    if (this->_Exp >= a)
        return true;
    return false;
}