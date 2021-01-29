/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** DomesticKoala
*/

#ifndef DOMESTICKOALA_HPP_
#define DOMESTICKOALA_HPP_

#include <iostream>
#include <vector>
#include "KoalaAction.hpp"

class DomesticKoala {
public:
	DomesticKoala(KoalaAction &);
	~DomesticKoala();
        DomesticKoala (const DomesticKoala &);
        DomesticKoala &operator=(const DomesticKoala &);

        using methodPointer_t = void (KoalaAction::*)(const std::string &);

        const std::vector<methodPointer_t> *getActions() const;
        void learnAction(unsigned char command, methodPointer_t action);
        void unlearnAction(unsigned char command);
        void doAction(unsigned char command, const std::string &param);
        void setKoalaAction(KoalaAction &);
protected:
        KoalaAction _kaction;
        std::vector<methodPointer_t> _vactions;
private:
};

#endif /* !DOMESTICKOALA_HPP_ */
