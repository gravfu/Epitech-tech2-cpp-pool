/*
** EPITECH PROJECT, 2020
** cpp_d09_2019
** File description:
** Character
*/

#ifndef CHARACTER_HPP_
#define CHARACTER_HPP_

#include <iostream>

class Character {
public:
        Character(const std::string &name, int level);
        ~Character();
        const std::string &getName() const ;
        int getLvl() const ;
        int getPv() const ;
        int getPower() const ;
        int CloseAttack ();
        void Heal ();
        int RangeAttack ();
        void RestorePower ();
        void TakeDamage (int damage);
        enum AttackRange {CLOSE, RANGE};
        AttackRange Range = CLOSE;

protected:
        std::string _name;
        int _level;
        int _Pv;
        int _Power;

        int Strength;
        int Stamina;
        int Intelligence;
        int Spirit;
        int Agility;
private:
};

#endif /* !CHARACTER_HPP_ */
