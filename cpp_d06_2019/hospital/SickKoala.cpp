/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** SickKoala
*/

#include "SickKoala.hpp"
#include <string>
#include <iostream>
#include <algorithm>

SickKoala::SickKoala(std::string Koala_name_init)
{
    this->Koala_name = Koala_name_init;
}

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->Koala_name << ": Kreooogg!! I'm cuuuured!"
        << std::endl;
}

void SickKoala::poke()
{
    std::cout << "Mr." << this->Koala_name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string Koala_drug)
{
    if (Koala_drug.compare("Mars") == 0) {
        std::cout << "Mr." << this->Koala_name << ": Mars, and it kreogs!" << std::endl;
        return true;
    }
    if (Koala_drug.compare("Buronzand") == 0) {
        std::cout << "Mr." << this->Koala_name << ": And you'll sleep right away!" << std::endl;
        return true;
    }
    std::cout << "Mr." << this->Koala_name << ": Goerkreog!" << std::endl;
    return false;
}

void SickKoala::overDrive(const std::string Koala_over)
{
    size_t found = 0;
    std::cout << "Mr." << this->Koala_name << ": ";
    for(size_t i = 0; i < Koala_over.size(); i++) {
        found = Koala_over.find("Kreog!", i);
        if (found == (size_t) -1 || found > i)
            std::cout << Koala_over[i];
        if (found == i) {
            i = i + 5;
            std::cout << "1337!";
        }
    }
    std::cout << std::endl;
}

std::string SickKoala::getName()
{
    return this->Koala_name;
}