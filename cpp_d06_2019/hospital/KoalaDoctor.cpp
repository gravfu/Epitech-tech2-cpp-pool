/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaDoctor
*/

#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name_init)
{
    this->name = name_init;
    this->is_working = false;
    std::cout << "Dr."<< this->name << ": I'm Dr." << this->name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

void KoalaDoctor::diagnose(SickKoala &patient)
{
    int rdm = random() % 5;
    std::string drugs[5] = {"Mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
    std::cout << "Dr."<< this->name << ": So what's goerking you Mr." << patient.getName() << "?" << std::endl;
    patient.poke();
    std::ofstream myfile( patient.getName() +  ".report");
    if (myfile.is_open())
    {
        myfile << drugs[rdm];
        myfile.close();
    }
}

void KoalaDoctor::timeCheck()
{
    this->is_working = !this->is_working;
    if (this->is_working == true)
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
    else
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
}

std::string KoalaDoctor::getName()
{
    return this->name;
}