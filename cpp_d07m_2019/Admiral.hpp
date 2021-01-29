/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Admiral
*/

#ifndef ADMIRAL_HPP_
#define ADMIRAL_HPP_

#include <iostream>
#include "Federation.hpp"

namespace Federation {
    namespace Starfleet {
        class Admiral {
            public:
                Admiral(std :: string name);
                ~Admiral();
                bool (Ship::*movePtr)(Destination);
                void (Ship::*firePtr)(Borg::Ship *);
                void fire ( Federation :: Starfleet :: Ship * ship , Borg :: Ship * target ) ;
                bool move ( Federation :: Starfleet :: Ship * ship , Destination dest ) ;
            private:
                std::string _name;
        };
    }
}

#endif /* !ADMIRAL_HPP_ */
