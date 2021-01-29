/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaDoctorList
*/

#ifndef KOALADOCTORLIST_HPP_
#define KOALADOCTORLIST_HPP_

#include "KoalaDoctor.hpp"

class KoalaDoctorList {
	public:
		KoalaDoctorList(KoalaDoctor *koala_var);
		~KoalaDoctorList();
		bool isEnd();
		void append(KoalaDoctorList *koala_var);
		KoalaDoctor *getFromName(std::string str);
		KoalaDoctorList *remove(KoalaDoctorList *koalalist);
		KoalaDoctorList *removeFromName(std::string var_name);
		void dump();
		void dump_two();

	protected:
	private:
		KoalaDoctor *koala;
		KoalaDoctorList *next;
};

#endif /* !KOALADOCTORLIST_HPP_ */
