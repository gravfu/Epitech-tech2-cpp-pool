/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
**  Squad
*/

#include "Squad.hpp"

Squad::Squad()
{
    _spacemarine = new ISpaceMarine *[1000];
    for (int i = 0; i < 1000; i++)
        _spacemarine[i] = nullptr;
    _Count = 0;
}

Squad::Squad(const Squad &cpysquad)
{
    _spacemarine = new ISpaceMarine *[1000];
    _Count = cpysquad._Count;
    for (int i = 0; i < _Count; i++){
        _spacemarine[i] = cpysquad._spacemarine[i]->clone();
    }
}

Squad::~Squad()
{
    for (int i = 0; i < 1000; i++){
        if (_spacemarine[i] != nullptr)
            delete _spacemarine[i];
    }
    if (_spacemarine)
        delete[] _spacemarine;
}

int Squad::getCount() const
{
    return _Count;
}

ISpaceMarine *Squad::getUnit(int index)
{
    for (int i = 0; i <= index; i++) {
        if (_spacemarine == nullptr || (_spacemarine && _spacemarine[i] == nullptr))
            return nullptr;
    }
    return _spacemarine[index];
}

int Squad::push(ISpaceMarine *marine)
{
    if (marine == nullptr)
        return _Count;
    for (int i = 0; i < _Count; i++) {
        if (_spacemarine[i] == marine)
            return _Count;
    }
    _spacemarine[_Count] = marine;
    _Count += 1;
    return _Count;
}

Squad &Squad::operator=(const Squad &cpysquad) {
    for (int i = 0; i < 1000; i++){
        if (_spacemarine[i])
            delete _spacemarine[i];
    }
    delete[] _spacemarine;
    _spacemarine = new ISpaceMarine *[1000];
    for (int i = 0; i < 1000; i++)
        _spacemarine[i] = nullptr;
    _Count = cpysquad._Count;
    for (int i = 0; i < _Count; i++){
        _spacemarine[i] = cpysquad._spacemarine[i]->clone();
    }
    return *this;
}