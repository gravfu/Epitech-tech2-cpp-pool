/*
** EPITECH PROJECT, 2020
** cpp_d06_2019
** File description:
** main
*/

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

// return Celsius;
double Fahr_to_Cel(double x)
{
    return (double) (5.0 / 9.0 * (x - 32.0));
}

double Cel_to_Fahr(double x)
{
    return (double) ((9.0 * x) / 5.0 + 32);
}

int main()
{
    double s;
    std::string c;
    double nb;


    while (!std::cin.eof()) {
        std::cin >> s >> c;
    }
    if (c.compare("Celsius") == 0) {
        nb = Cel_to_Fahr(s);
        std::cout.precision(3);
        std::cout << std::setw(16) <<  std::fixed << nb;
        std::cout << std::setw(16) << "Fahrenheit" << std::endl;
    } else if (c.compare("Fahrenheit") == 0) {
        nb = Fahr_to_Cel(s);
        std::cout.precision(3);
        std::cout << std::setw(16) << std::fixed << nb;
        std::cout << std::setw(16) << "Celsius" << std::endl;
    }
}