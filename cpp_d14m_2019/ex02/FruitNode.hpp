/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitNode
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include "Fruit.hpp"

struct FruitNode {
	public:
		FruitNode(Fruit *fruit);
		~FruitNode();
		Fruit *_fruit;
		FruitNode *next;
};

#endif /* !FRUITNODE_HPP_ */
