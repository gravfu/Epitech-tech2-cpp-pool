/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** ToyStory
*/

#include "ToyStory.hpp"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

void ToyStory::tellMeAStory(const std::string &filename,
						Toy &toy1, bool (Toy::*func1)(const std::string &str1),
						Toy &toy2, bool (Toy::*func2)(const std::string &str2))
{
    bool w_func = true;
    std::string sub = "picture:";
    std::ifstream in (filename, std::ifstream::in);
    if (!in) {
        std::cout << "Bad Story" << std::endl;
        return;
    }
    if (toy1.getLastError().type == Toy::Error::UNKNOWN) {
        std::cout << toy1.getAscii() << std::endl;
    } else {
        std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
        return;
    }
    if (toy2.getLastError().type == Toy::Error::UNKNOWN)
        std::cout << toy2.getAscii() << std::endl;
    else {
        std::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
        return;
    }
    std::string line;
    while (std::getline(in, line)) {
        if (line.find(sub) == 0) {
            line.replace(line.find(sub),sub.length(),"");
            if (w_func == true) {
                if (toy1.setAscii(line) == false) {
                    std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
                    return;
                }
                std::cout << toy1.getAscii() << std::endl;
            } else {
                if (toy2.setAscii(line) == false){
                    std::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
                    return;
                }
                std::cout << toy2.getAscii() << std::endl;
            }
        } else {
            if (w_func == true) {
                if ((toy1.*func1)(line) == false) {
                    std::cout << toy1.getLastError().where() << ": " << toy1.getLastError().what() << std::endl;
                }
            } else {
                if ((toy2.*func2)(line) == false) {
                    std::cout << toy2.getLastError().where() << ": " << toy2.getLastError().what() << std::endl;
                }
            }
            w_func = !w_func;
        }
    }
}