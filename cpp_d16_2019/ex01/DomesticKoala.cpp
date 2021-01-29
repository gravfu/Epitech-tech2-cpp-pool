/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** DomesticKoala
*/

#include "DomesticKoala.hpp"

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

DomesticKoala::DomesticKoala(KoalaAction &action) : _kaction(action), _vactions(256)
{
}

DomesticKoala::~DomesticKoala()
{
}

DomesticKoala::DomesticKoala (const DomesticKoala &tmp) : _kaction(tmp._kaction), _vactions(256)
{
    _vactions = tmp._vactions;
}

DomesticKoala &DomesticKoala::operator=(const DomesticKoala &tmp)
{
    _kaction = tmp._kaction;
    _vactions = tmp._vactions;
    return *this;
}

const std::vector<DomesticKoala::methodPointer_t> *DomesticKoala::getActions() const
{
    return &_vactions;
}

void DomesticKoala::learnAction(unsigned char command, methodPointer_t action)
{
    _vactions.at(command) = action; 
}

void DomesticKoala::unlearnAction(unsigned char command)
{
    _vactions.at(command) = nullptr;
}

void DomesticKoala::doAction(unsigned char command, const std::string &param)
{
    if (_vactions[command] != nullptr)
        (_kaction.*_vactions[command])(param);
}

void DomesticKoala::setKoalaAction(KoalaAction &koaction)
{
    _kaction = koaction;
}