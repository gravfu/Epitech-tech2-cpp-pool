/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** TacticalMarine
*/

#ifndef TACTICALMARINE_HPP_
#define TACTICALMARINE_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine();
		~TacticalMarine();
        ISpaceMarine* clone() const final;
        void battleCry() const final;
        void rangedAttack() const final;
        void meleeAttack() const final;

	protected:
	private:
};

#endif /* !TACTICALMARINE_HPP_ */
