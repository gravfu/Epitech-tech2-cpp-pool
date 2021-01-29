/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer
*/

#ifndef SORCERER_HPP_
#define SORCERER_HPP_

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(const std::string& , const std::string&);
		~Sorcerer();
        std::string getName() const;
        std::string getTitle() const;
        void polymorph(const Victim &victim) const;

	private:
        std::string _name;
        std::string _title;
};

std::ostream &operator<<(std::ostream &a, const Sorcerer &b);

#endif /* !SORCERER_HPP_ */
