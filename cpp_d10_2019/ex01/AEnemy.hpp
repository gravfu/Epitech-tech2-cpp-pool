/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** AEnemy
*/

#ifndef AENEMY_HPP_
#define AENEMY_HPP_

#include <iostream>

class AEnemy {
public:
    AEnemy(int hp, const std::string &type);
    virtual ~AEnemy();

    virtual void takeDamage(int damage);

    std::string const getType() const;
    int getHP() const;

protected:
    int _hp;
    const std::string _type;

private:
};

#endif /* !AENEMY_HPP_ */
