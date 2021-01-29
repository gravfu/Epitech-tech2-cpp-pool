/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Ratatouille
*/

#ifndef RATATOUILLE_HPP_
#define RATATOUILLE_HPP_

#include <sstream>
#include <ostream>
#include <iostream>

class Ratatouille {
public:
	Ratatouille();
	Ratatouille(Ratatouille const & other);
	~ Ratatouille();
	Ratatouille &operator=(const Ratatouille &rhs);

	// member functions
	Ratatouille &addVegetable(unsigned char);
	Ratatouille &addCondiment(unsigned int);
	Ratatouille &addSpice(double);
	Ratatouille &addSauce(const std::string &);

	std :: string kooc();

protected:
	std::ostringstream _stream;
private:
};

#endif /* !RATATOUILLE_HPP_ */