/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** LittleHand
*/

#include "LittleHand.hpp"
#include "Lime.hpp"
#include "Banana.hpp"

LittleHand::LittleHand()
{
}

LittleHand::~LittleHand()
{
}

void LittleHand::sortFruitBox(FruitBox &unsorted, FruitBox &lemons , FruitBox &bananas, FruitBox &limes)
{
    Fruit *tmp;
    int tmp2 = unsorted.nbFruits();
    for (int i = 0; i < tmp2; i++) {
        tmp = unsorted.pickFruit();
        if (dynamic_cast<Lime *> (tmp)) {
            if(limes.putFruit(tmp) == false)
                unsorted.putFruit(tmp);
        } else if(dynamic_cast<Lemon *> (tmp)) {
            if(lemons.putFruit(tmp) == false)
                unsorted.putFruit(tmp);
        } else if (dynamic_cast<Banana *> (tmp)) {
            if(bananas.putFruit(tmp) == false)
                unsorted.putFruit(tmp);
        } else {
            unsorted.putFruit(tmp);
        }
    }
}

FruitBox * const * LittleHand::organizeCoconut(Coconut const * const * coconuts)
{
    int len;
    int boxnb = -1;
    if (coconuts == nullptr)
        return nullptr;
    for(len = 0; coconuts[len] != nullptr; len++);
    FruitBox **tmp = new FruitBox*[len%6 == 0 ? len/6+1 : len/6 + 2];
    for(int i = 0; coconuts[i] != nullptr; i++) {
        if (i%6 == 0) {
            boxnb +=1;
            tmp[boxnb] = new FruitBox(6);
        }
        tmp[boxnb]->putFruit((const_cast<Coconut*>(coconuts[i])));
    }
    tmp[boxnb+1] = nullptr;
    return tmp;
}