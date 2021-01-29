/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaNurse
*/

#include <fstream>
#include <iostream>
#include <iomanip>
#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id)
{
    this->id = id;
    this->is_working = false;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala &patient)
{
    patient.takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string filename)
{
    std::string line;
    std::ifstream file(filename, std::ifstream::in);
    if (file && filename.size() > 7 &&
        filename.rfind(".report") == filename.size() - 7) {
        if(std::getline(file, line)) {
            std::cout << "Nurse " << this->id << ": Kreog! Mr." << filename.substr(0, filename.size() - 7) << " needs a " << line << "!" << std::endl;
            return (filename.substr(0, filename.size() - 7));
        }
    }
    return "";
}

void KoalaNurse::timeCheck()
{
    this->is_working = !this->is_working;
    if (this->is_working == true)
        std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
    else
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
}

int KoalaNurse::getID()
{
    return this->id;
}