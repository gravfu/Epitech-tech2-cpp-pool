/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Warrior
*/

#ifndef WARRIOR_HPP_
#define WARRIOR_HPP_

#include "Character.hpp"

class Warrior : virtual public Character {
	public:
		Warrior(const std::string &name, int level, const std::string weapon = "hammer");
		~Warrior();
		int CloseAttack ();
        int RangeAttack ();

	protected:
	private:
		const std::string _weaponName;
		//bool _att_close_cbt = false;
};

#endif /* !WARRIOR_HPP_ */
