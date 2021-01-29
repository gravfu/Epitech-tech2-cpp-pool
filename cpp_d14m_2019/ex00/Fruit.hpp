/*
** EPITECH PROJECT, 2020
** cpp_d14m_2019
** File description:
** Fruit
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_

#include <iostream>

class Fruit {
	public:
		Fruit(int vitamine);
		~Fruit();
		virtual std::string getName() const = 0;
		int getVitamins();

	protected:
		int _vitamins;
		const std::string _name;
	private:
};

#endif /* !FRUIT_HPP_ */
