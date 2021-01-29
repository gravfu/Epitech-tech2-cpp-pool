/*
** EPITECH PROJECT, 2020
** cpp_d08_2019
** File description:
** DroidMemory
*/

#ifndef DROIDMEMORY_HPP_
#define DROIDMEMORY_HPP_

#include <iostream>

class DroidMemory {
public:
	DroidMemory();
	~DroidMemory();
        DroidMemory(const DroidMemory&);

        size_t getFingerprint() const;
        void setFingerprint(size_t finger);

        size_t getExp() const;
        void setExp(size_t finger);

        DroidMemory * getBattleData() const;
        void setBattleData(DroidMemory *);

        DroidMemory &operator<<(const DroidMemory& mem) ;
        DroidMemory const & operator>>(DroidMemory& mem) const;
        DroidMemory & operator+=(const DroidMemory& mem);
        DroidMemory & operator+=(size_t mem);
        DroidMemory & operator+(const DroidMemory& mem) const;
        DroidMemory & operator+(size_t mem) const;
        DroidMemory & operator=(const DroidMemory&);

        bool operator!=(const DroidMemory& a) const;
        bool operator==(const DroidMemory& a) const;
        bool operator<(const DroidMemory& a) const;
        bool operator>(const DroidMemory& a) const;
        bool operator<=(const DroidMemory& a) const;
        bool operator>=(const DroidMemory& a) const;

        bool operator!=(const size_t a) const;
        bool operator==(const size_t a) const;
        bool operator<(const size_t a) const;
        bool operator>(const size_t a) const;
        bool operator<=(const size_t a) const;
        bool operator>=(const size_t a) const;

protected:
private:
        DroidMemory * BattleData;
        size_t _Fingerprint;
        size_t _Exp;
};

std::ostream &operator<<(std::ostream &, const DroidMemory &);

#endif /* !DROIDMEMORY_HPP_ */
