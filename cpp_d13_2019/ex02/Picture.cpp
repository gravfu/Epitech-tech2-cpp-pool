/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Picture
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file)
{
    data = "";
    if (file == "") {
        data = "";
    } else {
        std::ifstream in (file, std::ifstream::in);
        if (!in) {
            data = "ERROR";
            return;
        }
        std::string line;
        while (std::getline(in, line)) {
            data = data + line + "\n";
        }
    }
}

Picture::~Picture()
{
}

Picture::Picture(const Picture &to_cpy)
{
    this->data = to_cpy.data;
}

bool Picture::getPictureFromFile(const std::string &file)
{
    std::ifstream in (file, std::ifstream::in);
    if (!in) {
        data = "ERROR";
        return false;
    } else {
        data = "";
        std::string line;
        while (std::getline(in, line)) {
            data = data + line + "\n";
        }
        return true;
    }
}

Picture &Picture::operator=(const Picture &cpyptr)
{
    if (this == &cpyptr)
        return *this;
    this->data = cpyptr.data;
    return *this;
}