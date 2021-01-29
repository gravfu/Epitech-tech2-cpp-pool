/*
** EPITECH PROJECT, 2020
** cpp_d17_2019
** File description:
** Encryption
*/

#ifndef ENCRYPTION_HPP_
#define ENCRYPTION_HPP_

#include "Cesar.hpp"
#include "OneTime.hpp"

class Encryption {
    public:
        Encryption(IEncryptionMethod &, void (IEncryptionMethod::*)(char));
        ~Encryption();
        void operator()(char c);

    protected:
        void (IEncryptionMethod::*_ptr)(char);
        IEncryptionMethod &_func;
    private:
};

#endif /* !ENCRYPTION_HPP_ */
