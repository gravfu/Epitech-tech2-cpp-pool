/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Skat
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name , int stimPaks)
{
    _stimpaks = stimPaks;
    _name = name;
}

Skat::~Skat()
{
}

int &Skat::stimPaks()
{
    return _stimpaks;
}

const std::string &Skat::name()
{
    return _name;
}

void Skat::shareStimPaks(int number, int &stock)
{
    if (_stimpaks - number < 0)
        std::cout << "Don't be greedy" << std::endl;
    else {
        _stimpaks -= number;
        stock += number;
        std::cout << "Keep the change." << std::endl;
    }
}

void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    _stimpaks = _stimpaks + number;
}

void Skat::useStimPaks()
{
    if (_stimpaks == 0)
        std::cout << "Mediiiiiic" << std::endl;
    else {
        _stimpaks = _stimpaks -1;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
}

void Skat::status()
{
    std::cout << "Soldier " <<  _name << " reporting "<< _stimpaks << " stimpaks remaining sir!" << std::endl;
}