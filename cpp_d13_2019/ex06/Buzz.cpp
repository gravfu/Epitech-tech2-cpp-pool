/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(const std::string &name, const std::string &ascii) : Toy(BUZZ, name, ascii)
{

}

Buzz::~Buzz()
{
}

bool Buzz::speak(const std::string &statement)
{
    std::cout << "BUZZ: " << name << " \"" << statement << "\"" << std::endl;
    return true;
}

bool Buzz::speak_es(const std::string &statement)
{
    std::cout << "BUZZ: " << name << " senorita \"" << statement << "\"" << " senorita" << std::endl;
    return true;
}