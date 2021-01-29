/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** BorgQueen
*/

#include "BorgQueen.hpp"

Borg::BorgQueen::BorgQueen()
{
    movePtr = &Ship::move;
    firePtr = &Ship::fire;
    destroyPtr = &Ship::fire;
}

Borg::BorgQueen::~BorgQueen()
{
}

bool Borg::BorgQueen::move ( Borg::Ship * ship , Destination dest )
{
    if ((ship->*movePtr)(dest) == true)
        return true;
    return false;
}

void Borg::BorgQueen::fire ( Borg::Ship * ship , Federation :: Starfleet :: Ship * target )
{
    (ship->*firePtr)(target);
}

void Borg::BorgQueen::destroy ( Borg::Ship * ship , Federation :: Ship * target )
{
    (ship->*destroyPtr)(target);
}