/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_

#include "Fruit.hpp"
#include "FruitNode.hpp"

class FruitBox {
	public:
		FruitBox(int size);
		~FruitBox();

		int nbFruits() const;
		bool putFruit(Fruit *f);
		Fruit *pickFruit();
		FruitNode *head();

	protected:
		FruitNode *_head;
		const int _size;
		int nb_fruit;
	private:
};

#endif /* !FRUITBOX_HPP_ */
