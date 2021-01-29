/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    _serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(const Arms &arm)
{
    _arm = arm;
}

void KoalaBot::setParts(const Legs &leg)
{
    _leg = leg;
}


void KoalaBot::setParts(const Head &head)
{
    _head = head;
}

void KoalaBot::swapParts(Arms &arm)
{
    Arms tmp = arm;
    arm = _arm;
    _arm = tmp;
}

void KoalaBot::swapParts(Legs &leg)
{
    Legs tmp = leg;
    leg = _leg;
    _leg = tmp;
}

void KoalaBot::swapParts(Head &head)
{
    Head tmp = head;
    head = _head;
    _head = tmp;
}

void KoalaBot::informations() const
{
    std::cout << "[KoalaBot] " << _serial << std::endl;
    std::cout << "\t";
    this->_arm.informations();
    std::cout << "\t";
    this->_leg.informations();
    std::cout << "\t";
    this->_head.informations();
}

bool KoalaBot::status() const
{
    if (_leg.isFunctional() && _arm.isFunctional() && _head.isFunctional())
        return true;
    return false;
}