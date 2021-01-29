/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include "Parts.hpp"

class KoalaBot {
	public:
		KoalaBot(std::string serial = "Bob-01");
		~KoalaBot();
		void setParts(const Arms &arm);
		void setParts(const Legs &leg);
		void setParts(const Head &head);
		void swapParts(Arms &arm);
		void swapParts(Legs &leg);
		void swapParts(Head &head);
		void informations() const;
		bool status() const;

	protected:
	private:
		std::string _serial;
		Arms _arm;
		Legs _leg;
		Head _head;
};

#endif /* !KOALABOT_HPP_ */
