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
    Fruit *tmp = unsorted.pickFruit();
    int tmp2 = unsorted.nbFruits();
    for (int i = 0; i < tmp2; i++) {
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
        if (i+1 != tmp2)
            tmp = unsorted.pickFruit();
    }
}