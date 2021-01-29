/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** KoalaNurseList
*/

#ifndef KOALANURSELIST_HPP_
#define KOALANURSELIST_HPP_

#include "KoalaNurse.hpp"

class KoalaNurseList {
	public:
		KoalaNurseList(KoalaNurse *koala_var);
		~KoalaNurseList();
		bool isEnd();
		void append(KoalaNurseList *koala_var);
		KoalaNurse *getFromID(int id);
		KoalaNurseList *remove(KoalaNurseList *koalalist);
		KoalaNurseList *removeFromID(int var_name);
		void dump();
		void dump_two();

	protected:
	private:
		KoalaNurse *koala;
		KoalaNurseList *next;
};

#endif /* !KOALANURSELIST_HPP_ */
