/*
** EPITECH PROJECT, 2020
** cpp_d15_2019
** File description:
** ex06
*/

#ifndef EX06_HPP_
#define EX06_HPP_

#include <iostream>
#include <iomanip>
#include <string>

template<typename T> std::string to_string_spe(T x)
{
    (void) x;
    return "[???]";
}

template<>
std::string to_string_spe(int x)
{
    return "[int:" + std::to_string(x) + "]";
}

template<> std::string to_string_spe(float x)
{
    std::ostringstream obj;
    //obj << std::fixed;
    //obj << std::setprecision(1);
    obj << x;
    return ("[float:" + obj.str() + "f]");
}

template<> std::string to_string_spe(std::string x)
{
    return ("[string:\"" + x + "\"]");
}


template<typename S, typename T = S>
struct Tuple
{
    S a;
    T b;
    std::string toString() const{
        std::string ret = "[TUPLE " + to_string_spe(a) + " " + to_string_spe(b) + "]";
        return ret;
    }
};

#endif /* !EX06_HPP_ */
