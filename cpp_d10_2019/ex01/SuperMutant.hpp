/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** SuperMutant
*/

#ifndef SUPERMUTANT_HPP_
#define SUPERMUTANT_HPP_

#include "AEnemy.hpp"

class SuperMutant : public AEnemy {
	public:
		SuperMutant();
		~SuperMutant();
        void takeDamage(int damage) override;

	protected:
	private:
};

#endif /* !SUPERMUTANT_HPP_ */
