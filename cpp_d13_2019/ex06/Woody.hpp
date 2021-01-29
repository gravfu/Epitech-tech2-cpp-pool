/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Woody
*/

#ifndef WOODY_HPP_
#define WOODY_HPP_

#include "Toy.hpp"

class Woody : public Toy {
	public:
		Woody(const std::string &name, const std::string &ascii = "woody.txt");
		~Woody();

		bool speak(const std::string &statement) override;

	protected:
	private:
};

#endif /* !WOODY_HPP_ */
