/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** ToyStory
*/

#ifndef TOYSTORY_HPP_
#define TOYSTORY_HPP_

#include "Toy.hpp"
#include "Buzz.hpp"
#include "Woody.hpp"

class ToyStory {
	public:
		ToyStory();
		~ToyStory();

		static void tellMeAStory(const std::string &filename,
						Toy &toy1, bool (Toy::*func1)(const std::string &str1),
						Toy &toy2, bool (Toy::*func2)(const std::string &str2));

	protected:
	private:
};

#endif /* !TOYSTORY_HPP_ */
