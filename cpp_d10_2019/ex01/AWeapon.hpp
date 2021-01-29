/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AWeapon
*/

#ifndef AWEAPON_HPP_
#define AWEAPON_HPP_

#include <iostream>

class AWeapon {
public:
	AWeapon(const std::string &name, int apcost, int damage);
	virtual ~AWeapon();
        std::string const getName() const;
        int getAPCost() const;
        int getDamage() const;
        virtual void attack () const = 0;

protected:
        const std::string _name;
        int _damage_points;
        int _apcost;

private:
};

#endif /* !AWEAPON_HPP_ */
