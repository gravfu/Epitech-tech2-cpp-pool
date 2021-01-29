/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AssaultTerminator
*/

#ifndef ASSAULTTERMINATOR_HPP_
#define ASSAULTTERMINATOR_HPP_

#include <iostream>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator();
		~AssaultTerminator();
        ISpaceMarine* clone() const final;
        void battleCry() const final;
        void rangedAttack() const final;
        void meleeAttack() const final;

	protected:
	private:
};

#endif /* !ASSAULTTERMINATOR_HPP_ */
