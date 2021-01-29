/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#include "Cesar.hpp"
#include <iostream>

Cesar::Cesar()
{
    _shift = 3;
}

Cesar::~Cesar()
{
}

void Cesar::encryptChar(char plainchar)
{
    if (isalpha(plainchar)) {
        if (plainchar >= 'a')
            plainchar = 'a' + (((plainchar - 'a') + _shift) % 26);
        else
            plainchar = 'A' + (((plainchar - 'A') + _shift) % 26);
    }
    std::cout << plainchar;
    _shift = (_shift + 1) % 26;
}

void Cesar::decryptChar(char cipherchar)
{
    if (isalpha(cipherchar)) {
         if (cipherchar >= 'a') {
            cipherchar = (((cipherchar - 'a') - _shift) % 26);
            if (cipherchar < 0)
                cipherchar = cipherchar + 26 + 'a';
            else
                cipherchar = cipherchar + 'a';
         } else {
            cipherchar = (((cipherchar - 'A') - _shift) % 26);
            if (cipherchar < 0)
                cipherchar = cipherchar + 26 + 'A';
            else
                cipherchar = cipherchar + 'A';
         }
    }
    std::cout << cipherchar;
    _shift = (_shift + 1) % 26;
}

void Cesar::reset()
{
    _shift = 3;
}