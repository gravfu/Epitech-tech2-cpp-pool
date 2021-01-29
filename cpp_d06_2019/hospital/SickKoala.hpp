/*
** EPITECH PROJECT, 2020
** cpp-pool
** File description:
** SickKoala
*/

#ifndef SICKKOALA_HPP_
#define SICKKOALA_HPP_

#include <string>

class SickKoala {
	public:
		SickKoala(std::string Koala_name_init);
		~SickKoala();
        void poke();
		bool takeDrug(std::string Koala_drug);
		void overDrive(const std::string Koala_over);
		std::string getName();

	protected:
	private:
        std::string Koala_name;
};

#endif /* !SICKKOALA_HPP_ */
