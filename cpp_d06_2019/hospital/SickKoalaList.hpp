/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** SickKoalaList
*/

#ifndef SICKKOALALIST_HPP_
#define SICKKOALALIST_HPP_

#include "SickKoala.hpp"

class SickKoalaList {
	public:
		SickKoalaList(SickKoala *koala_var);
		~SickKoalaList();
		bool isEnd();
		void append(SickKoalaList *koala_var);
		SickKoala *getFromName(std::string str);
		SickKoalaList *remove(SickKoalaList *koalalist);
		SickKoalaList *removeFromName(std::string var_name);
		SickKoala *getContent();
		SickKoalaList *getNext();
		void dump();
		void dump_two();

	protected:
	private:
		SickKoala *koala;
		SickKoalaList *next;
};

#endif /* !SICKKOALALIST_HPP_ */
