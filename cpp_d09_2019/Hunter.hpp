/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include "Warrior.hpp"

class Hunter : public Warrior {
	public:
		Hunter(const std::string &name, int level);
		~Hunter();
		void RestorePower();
		int RangeAttack ();

	protected:
		const std::string _weaponName;
	private:
};

#endif /* !HUNTER_HPP_ */
