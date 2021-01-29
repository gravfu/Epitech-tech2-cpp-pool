/*
** EPITECH PROJECT, 2020
** cpp_d14a_2019
** File description:
** SimplePtr
*/

#include "SimplePtr.hpp"

SimplePtr::SimplePtr(BaseComponent *rawPtr)
{
    _rawPtr = rawPtr;
}

SimplePtr::~SimplePtr()
{
    if (_rawPtr != nullptr)
        delete _rawPtr;
}

BaseComponent *SimplePtr::get() const
{
    return _rawPtr;
}