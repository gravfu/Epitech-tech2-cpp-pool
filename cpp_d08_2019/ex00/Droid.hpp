/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** Droid
*/

#ifndef DROID_HPP_
#define DROID_HPP_

#include <iostream>

class Droid {
public:
	Droid(std::string serial = "");
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
        Droid *operator<<(size_t& out);
        Droid& operator=(const Droid& a);

protected:
private:
        std::string _Id;
        size_t _Energy;
        const size_t _Attack;
        const size_t _Toughness;
        std::string *_Status;
};

std::ostream &operator<<(std::ostream &, const Droid &);

#endif /* !DROID_HPP_ */
