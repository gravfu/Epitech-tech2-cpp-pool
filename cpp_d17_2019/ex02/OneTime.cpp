/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** OneTime
*/

#include "OneTime.hpp"

OneTime::OneTime(const std::string &key)
{
    _key = key;
    index = 0;
}

OneTime::~OneTime()
{

}

void OneTime::encryptChar(char plainchar)
{
    char temp;
    char tmp = plainchar;
    if (isalpha(plainchar)) {
        if (_key[index] >= 'a')
            temp = _key[index] - 'a';
        else
            temp = _key[index] - 'A';
        if (plainchar >= 'a')
            tmp = (((tmp - 'a') + (temp))% 26) + 'a';
        else
            tmp = (((tmp - 'A') + (temp))%26) + 'A';
    }
    std::cout << tmp;
    index = (index + 1) % (_key.size());
}

void OneTime::decryptChar(char cipherchar)
{
    char tmp = cipherchar;
    char temp;
    if (isalpha(cipherchar)) {
        if (_key[index] >= 'a')
            temp = _key[index] - 'a';
        else
            temp = _key[index] - 'A';
        if (cipherchar >= 'a')
            tmp =  (((tmp - 'z') - (temp))%26) + 'z';
        else
            tmp = (((tmp - 'Z') - (temp))%26) + 'Z';;
    }
    std::cout << tmp;
    index = ((index + 1) % (_key.size()));
}

void OneTime::reset()
{
    index = 0;
}