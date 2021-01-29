/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Encryption
*/

#include "Encryption.hpp"

Encryption::Encryption(IEncryptionMethod &x, void (IEncryptionMethod::*ptr)(char)) : _func(x)
{
    _ptr = ptr;
}

Encryption::~Encryption()
{
}

void Encryption::operator()(char c)
{
    (_func.*_ptr)(c);
}