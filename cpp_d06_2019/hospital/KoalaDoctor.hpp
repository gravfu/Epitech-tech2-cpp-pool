/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaDoctor
*/

#ifndef KOALADOCTOR_HPP_
#define KOALADOCTOR_HPP_

#include "SickKoala.hpp"

class KoalaDoctor {
	public:
		KoalaDoctor(std::string name_init);
		~KoalaDoctor();
        void diagnose(SickKoala &patient);
        void timeCheck();
		std::string getName();

	protected:
	private:
        bool is_working;
        std::string name;
};

#endif /* !KOALADOCTOR_HPP_ */
