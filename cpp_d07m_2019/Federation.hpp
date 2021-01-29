/*
** EPITECH PROJECT, 2020
** cpp_d07m_2019
** File description:
** Federation
*/

#ifndef FEDERATION_HPP_
#define FEDERATION_HPP_

#include <iostream>
#include "Destination.hpp"
#include "WarpSystem.hpp"
#include "Borg.hpp"

namespace Borg {class Ship;}

namespace Federation
{
    namespace Starfleet
    {
        class Captain
        {
            public:
                Captain(std::string name);
                ~Captain();
                std :: string getName();
                int getAge();
                void setAge(int age);

            private:
                std::string _name;
                int _age;
        };
        class Ship
        {
            public:
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                Ship();
                ~Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain *captain);
                bool move (int warp , Destination d );
                bool move (int warp );
                bool move ( Destination d );
                bool move ();
                int getShield () ;
                void setShield (int shield ) ;
                int getTorpedo () ;
                void setTorpedo (int torpedo ) ;
                void fire (Borg::Ship *target) ;
                void fire(int torpedoes, Borg::Ship *target);

            private:
                int _length ;
                int _width ;
                std::string _name ;
                short _maxWarp ;
                WarpSystem::Core *_core;
                Captain *_captain;
                Destination _location ;
                Destination _home = EARTH;
                int _shield = 100;
                int _photonTorpedo;
        };
        class Ensign
        {
            public:
                Ensign(std::string name);
                ~Ensign();
            private:
                std::string _name;
        };
    }

    class Ship
    {
    public:
        Ship(int length, int width, std::string name);
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore();
        bool move (int warp , Destination d ); // set _location to d
        bool move (int warp ) ; // set _location to _home
        bool move ( Destination d ) ; // set _location to d
        bool move () ; // set _location to _home
        WarpSystem::Core *getCore();

    private:
        int _length ;
        int _width ;
        std::string _name ;
        short _maxWarp = 1;
        WarpSystem::Core *_core;
        Destination _location ;
        Destination _home = VULCAN;
    };
}

#endif /* !FEDERATION_HPP_ */
