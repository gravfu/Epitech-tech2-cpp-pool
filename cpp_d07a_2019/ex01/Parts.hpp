/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** Parts
*/

#ifndef PARTS_HPP_
#define PARTS_HPP_

#include <iostream>

class Arms {
	public:
		Arms(std::string serial = "A-01", bool functional = 1);
		~Arms();
		bool isFunctional() const;
		std::string serial();
		void informations() const;
	private:
		bool _functional;
		std::string _serial;
};

class Legs {
	public:
		Legs(std::string serial = "L-01", bool functional = 1);
		~Legs();
		bool isFunctional() const;
		std::string serial();
		void informations() const;
	private:
		bool _functional;
		std::string _serial;
};

class Head {
	public:
		Head(std::string serial = "H-01", bool functional = 1);
		~Head();
		bool isFunctional() const;
		std::string serial();
		void informations() const;
	private:
		bool _functional;
		std::string _serial;
};

#endif /* !PARTS_HPP_ */
