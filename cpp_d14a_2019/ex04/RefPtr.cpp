/*
** EPITECH PROJECT, 2020
** cpp_d14a_2019
** File description:
** RefPtr
*/

#include "RefPtr.hpp"
#include <iostream>

RefPtr::RefPtr(BaseComponent *rawPtr)
{
    is_copy = new int;
    _rawPtr = rawPtr;
    *is_copy = 0;
}

RefPtr::RefPtr(RefPtr const &other)
{
    _rawPtr = other._rawPtr;
    is_copy = other.is_copy;
    *is_copy += 1;
}

RefPtr &RefPtr::operator=(RefPtr const &other)
{
    if (*is_copy == 0) {
        delete _rawPtr;
        delete is_copy;
    }
    is_copy = other.is_copy;
    *is_copy += 1;
    _rawPtr = other._rawPtr;
    return *this;
}

RefPtr::~RefPtr()
{
    *is_copy -= 1;
    if (_rawPtr != nullptr && *is_copy == 0) {
        delete _rawPtr;
        _rawPtr = nullptr;
    }
    if (*is_copy == -1)
        delete is_copy;
}

BaseComponent *RefPtr::get() const
{
    return _rawPtr;
}