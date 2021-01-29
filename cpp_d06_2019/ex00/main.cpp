/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** main
*/

#include <fstream>
#include <iostream>


int main(int argc, char **argv)
{
    if (argc == 1)
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
    for (auto i = 1; i < argc; i++) {
        std::ifstream file(argv[i], std::ifstream::in);
        if (!file)
            std::cerr << "my_cat: " << argv[i] << ": No such file or directory" << std::endl;
        else {
            std::string line;
            while (std::getline(file, line)) {
                std::cout << line << std::endl;
            }
        }
    }
    return 0;
}