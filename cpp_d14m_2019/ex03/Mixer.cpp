/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Mixer
*/

#include "Mixer.hpp"

// MixerBase:
MixerBase::MixerBase()
{
}
// Mixer
Mixer::Mixer()
{
    _mixfunc = &Mixer::mix;
    connect_it();
}

Mixer::~Mixer()
{
}

int Mixer::mix (FruitBox &fruits)
{
    int nb_fruits = fruits.nbFruits();
    int tmp = 0;
    FruitNode *tmp2 = fruits.head();
    for (int i = 0;  i < nb_fruits; i++)
    {
        tmp = tmp2->_fruit->getVitamins();
        if (tmp2->next != nullptr)
            tmp2 = tmp2->next;
    }
    return tmp;
}

void Mixer::connect_it()
{
    if (_plugged == false)
        _plugged = true;
}