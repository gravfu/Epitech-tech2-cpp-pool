/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** OneTime
*/

#ifndef ONETIME_HPP_
#define ONETIME_HPP_

#include "IEncryptionMethod.hpp"
#include <iostream>

class OneTime : public IEncryptionMethod {
    public:
        OneTime(const std::string &key);
        ~OneTime();
        void encryptChar(char plainchar) override;
		void decryptChar(char cipherchar) override;
		void reset() override;

    protected:
        std::string _key;
        int index;
    private:
};

#endif /* !ONETIME_HPP_ */
