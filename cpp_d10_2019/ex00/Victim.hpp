/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Victim
*/

#ifndef VICTIM_HPP_
#define VICTIM_HPP_

#include <iostream>

class Victim {
	public:
		Victim(const std::string &name);
		~Victim();
        std::string getName() const;
        virtual void getPolymorphed()const;

	protected:
		const std::string _name;
	private:
};

std::ostream &operator<<(std::ostream &a, const Victim &b);

#endif /* !VICTIM_HPP_ */
