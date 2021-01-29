/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_

#include "Warrior.hpp"
#include "Priest.hpp"

class Paladin : public Warrior, public Priest {
	public:
        Paladin(const std::string &name, int level);
        ~Paladin();
        int Intercept();
        int CloseAttack ();
        void Heal ();
        int RangeAttack ();
        void RestorePower ();
	protected:
	private:
};

#endif /* !PALADIN_HPP_ */
