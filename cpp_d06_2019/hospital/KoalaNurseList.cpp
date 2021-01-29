/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaNurseList
*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include "KoalaNurseList.hpp"

KoalaNurseList::KoalaNurseList(KoalaNurse *koala_var)
{
    this->koala = koala_var;
    this->next = nullptr;
}

KoalaNurseList::~KoalaNurseList()
{
}

bool KoalaNurseList::isEnd()
{
    if (this->next)
        return false;
    return true;
}

void KoalaNurseList::append(KoalaNurseList *koala)
{
    if (this->next)
        this->next->append(koala);
    else
        this->next = koala;
}

KoalaNurse *KoalaNurseList::getFromID(int x)
{
    if (this->koala && (this->koala->getID() == x))
        return this->koala;
    else if (this->next)
        return this->next->getFromID(x);
    else
        return nullptr;
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *koalalistvar)
{
    if (this == koalalistvar)
        return this->next;
    if (this->next)
        this->next = this->next->remove(koalalistvar);
    return this;
}

KoalaNurseList *KoalaNurseList::removeFromID(int var_name)
{
    if (this->koala->getID() == var_name)
        return this->next;
    if (this->next)
        this->next = this->next->removeFromID(var_name);
    return this;
}
void KoalaNurseList::dump () {
    std::cout << "Nurses: ";
    this->dump_two();
}
void KoalaNurseList::dump_two()
{
    if (this->koala)
        std::cout << this->koala->getID();
    else
        std::cout << "[nullptr]";
    if (this->next) {
        std::cout << ", ";
        this->next->dump_two();
    } else
        std::cout << "." << std::endl;
}