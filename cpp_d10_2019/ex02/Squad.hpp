/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
**  Squad
*/

#ifndef _SQUAD_HPP_
#define _SQUAD_HPP_

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

class Squad : public ISquad {
public :
    Squad();
    Squad(const Squad &cpysquad);
    ~Squad();
    int getCount() const override;
    ISpaceMarine *getUnit(int) override;
    int push(ISpaceMarine *) override;
    Squad &operator=(const Squad &cpysquad);

protected:
    int _Count;
    ISpaceMarine **_spacemarine;
};

#endif /* !_SQUAD_HPP_ */
