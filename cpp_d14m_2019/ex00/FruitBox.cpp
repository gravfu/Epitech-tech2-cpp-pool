/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox
*/

#include "FruitBox.hpp"


// FruitNode:
FruitNode::FruitNode(Fruit *fruit)
{
    _fruit = fruit;
    next = nullptr;
}

FruitNode::~FruitNode()
{
    if (next)
        delete next;
}

// FruitBox:

FruitBox::FruitBox(int size) : _size(size)
{
    nb_fruit = 0;
    _head = nullptr;
}

FruitBox::~FruitBox()
{

}

int FruitBox::nbFruits() const
{
    return nb_fruit;
}

bool FruitBox::putFruit(Fruit *f)
{
    if (nb_fruit == _size)
        return false;
    if (_head == nullptr) {
        _head = new FruitNode(f);
        nb_fruit++;
    } else {
        FruitNode *tmp = _head;
        while (tmp->next != nullptr) {
            if (tmp->_fruit == f)
                return false;
            tmp = tmp->next;
        }
        if (tmp->_fruit == f)
                return false;
        tmp->next = new FruitNode(f);
        nb_fruit += 1;
    }
    return true;
}

Fruit *FruitBox::pickFruit()
{
    if (_head == nullptr || nb_fruit == 0)
        return nullptr;
    FruitNode *tmp = _head;
    _head = _head->next;
    tmp->next = nullptr;
    nb_fruit -= 1;
    Fruit *tmp2 = tmp->_fruit;
    tmp->_fruit = nullptr;
    delete tmp;
    return tmp2;
}

FruitNode *FruitBox::head()
{
    return _head;
}