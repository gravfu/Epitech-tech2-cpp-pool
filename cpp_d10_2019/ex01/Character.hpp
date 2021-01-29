/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include "AEnemy.hpp"
#include "AWeapon.hpp"

class Character {
	public:
		Character(const std::string &name);
		~Character();
        void recoverAP();
        void equip(AWeapon *weapon);
        void attack (AEnemy *enemy);
        std :: string const getName () const ;
        int getAP() const;
        AWeapon *getWeapon() const;

	protected:
	private:
        const std::string _name;
        int _AP;
        AWeapon *_weapon;
};

std::ostream &operator<<(std::ostream &a, const Character &baba);

#endif /* !CHARACTER_HPP_ */
