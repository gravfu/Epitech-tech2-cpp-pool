/*
** EPITECH PROJECT, 2020
** cpp_d07a_2019
** File description:
** KreogCom
*/

#include "KreogCom.hpp"

KreogCom::KreogCom (int x , int y , int serial) : m_serial(serial)
{
    _x = x;
    _y = y;
    next = nullptr;
}

KreogCom::~KreogCom ()
{

}

void KreogCom::addCom (int x , int y , int serial)
{
    if (this->next == nullptr)
        this->next = new KreogCom (x, y, serial);
    else {
        KreogCom *tmp = this->next;
        this->next = new KreogCom (x, y, serial);
        this->next->next = tmp;
    }
}

void KreogCom::removeCom()
{
    KreogCom *tmp = this->next;
    this->next = this->next->next;
    tmp->next = nullptr;
    delete tmp;
}

KreogCom *KreogCom::getCom() const
{
    if (this->next)
        return this->next;
    return nullptr;
}
void KreogCom::ping () const
{
    std::cout << "KreogCom " << m_serial << " currently at " << _x << " " << _y << std::endl;
}
void KreogCom::locateSquad () const
{
    KreogCom *tmp = this->next;
    while(tmp != nullptr) {
        tmp->ping();
        tmp = tmp->next;
    }
    ping();
}