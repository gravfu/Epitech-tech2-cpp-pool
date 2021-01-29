/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Cesar
*/

#ifndef CESAR_HPP_
#define CESAR_HPP_

#include "IEncryptionMethod.hpp"

class Cesar : public IEncryptionMethod {
	public:
		Cesar();
		~Cesar();
        void encryptChar(char plainchar) override;
		void decryptChar(char cipherchar) override;
		void reset() override;

	protected:
		int _shift = 3;
	private:
};

#endif /* !CESAR_HPP_ */
