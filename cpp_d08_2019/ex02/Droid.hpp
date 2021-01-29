/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include "DroidMemory.hpp"
#include <iostream>

class Droid {
public:
	Droid(std::string serial);
	~Droid();
        Droid(const Droid&);
        std::string getId() const;
        size_t getEnergy() const;
        std::string *getStatus() const;
        size_t getAttack() const;
        size_t getToughness() const;
        void setId(std::string);
        void setEnergy(size_t);
        void setStatus(std::string *);
        bool operator==(const Droid& a) const;
        bool operator!=(const Droid& a) const;
        void operator<<(size_t& out);
        Droid& operator=(const Droid& a);
        bool operator()(const std::string *, size_t);

        DroidMemory * getBattleData() const;
        void setBattleData(DroidMemory *);

protected:
private:
        DroidMemory * BattleData;
        std::string _Id;
        size_t _Energy;
        const size_t _Attack;
        const size_t _Toughness;
        std::string *_Status;
};

std::ostream &operator<<(std::ostream &, const Droid &);

#endif /* !DROID_HPP_ */
