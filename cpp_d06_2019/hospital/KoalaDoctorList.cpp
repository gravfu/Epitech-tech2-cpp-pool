/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaDoctorList
*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include "KoalaDoctorList.hpp"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *koala_var)
{
    this->koala = koala_var;
    this->next = nullptr;
}

KoalaDoctorList::~KoalaDoctorList()
{
}

bool KoalaDoctorList::isEnd()
{
    if (this->next)
        return false;
    return true;
}

void KoalaDoctorList::append(KoalaDoctorList *koala)
{
    if (this->next)
        this->next->append(koala);
    else
        this->next = koala;
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string str)
{
    if (this->koala && (this->koala->getName().compare(str) == 0))
        return this->koala;
    else if (this->next)
        return this->next->getFromName(str);
    else
        return nullptr;
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *koalalistvar)
{
    if (this == koalalistvar)
        return this->next;
    if (this->next)
        this->next = this->next->remove(koalalistvar);
    return this;
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string var_name)
{
    if (this->koala->getName() == var_name)
        return this->next;
    if (this->next)
        this->next = this->next->removeFromName(var_name);
    return this;
}

void KoalaDoctorList::dump()
{
    std::cout << "Doctors: ";
    this->dump_two();
}

void KoalaDoctorList::dump_two()
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
