/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** SickKoalaList
*/

#include <string>
#include <iostream>
#include "SickKoalaList.hpp"

SickKoalaList::SickKoalaList(SickKoala *koala_var)
{
    this->koala = koala_var;
    this->next = nullptr;
}

SickKoalaList::~SickKoalaList()
{
}

bool SickKoalaList::isEnd()
{
    if (this->next)
        return false;
    return true;
}

void SickKoalaList::append(SickKoalaList *koala)
{
    if (this->next)
        this->next->append(koala);
    else
        this->next = koala;
}

SickKoala *SickKoalaList::getFromName(std::string str)
{
    if (this->koala && (this->koala->getName().compare(str) == 0))
        return this->koala;
    else if (this->next)
        return this->next->getFromName(str);
    else
        return nullptr;
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *koalalistvar)
{
    if (this == koalalistvar)
        return this->next;
    if (this->next)
        this->next = this->next->remove(koalalistvar);
    return this;
}

SickKoalaList *SickKoalaList::removeFromName(std::string var_name)
{
    if (this->koala->getName() == var_name)
        return this->next;
    if (this->next)
        this->next = this->next->removeFromName(var_name);
    return this;
}

SickKoala *SickKoalaList::getContent()
{
    return this->koala;
}

SickKoalaList *SickKoalaList::getNext()
{
    return this->next;
}

void SickKoalaList::dump()
{
    std::cout << "Patients: ";
    this->dump_two();
}

void SickKoalaList::dump_two()
{
    if (this->koala && (!(this->koala->getName().empty())))
        std::cout << this->koala->getName();
    else
        std::cout << "[nullptr]";
    if (this->next) {
        std::cout << ", ";
        this->next->dump_two();
    } else
        std::cout << "." << std::endl;
}