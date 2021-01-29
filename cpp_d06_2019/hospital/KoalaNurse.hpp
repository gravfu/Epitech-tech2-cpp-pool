/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaNurse
*/

#ifndef KOALANURSE_HPP_
#define KOALANURSE_HPP_

#include <string>
#include "SickKoala.hpp"

class KoalaNurse {
	public:
		KoalaNurse(int);
		~KoalaNurse();
                void giveDrug(std::string drug, SickKoala &patient);
                std::string readReport(std::string filename);
                void timeCheck();
                int getID();

	protected:
	private:
                int id;
                bool is_working;
};

#endif /* !KOALANURSE_HPP_ */
