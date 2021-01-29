/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** Event
*/

#include "Event.hpp"

Event::Event()
{
    _time = 0;
    _description = "";
}
Event::Event(unsigned int time, const std::string &event) : _description(event)
{
    _time = time;
}

Event::~Event()
{
}

Event::Event(const Event & other)
{
    this->_description = other._description;
    this->_time = other._time;
}

Event &Event::operator=(const Event &rhs)
{
    this->_time = rhs._time;
    this->_description = rhs._description;
    return *this;
}

unsigned int Event::getTime() const
{
    return _time;
}

const std::string & Event::getEvent () const
{
    return _description;
}

void Event::setTime(unsigned int time)
{
    _time = time;
}

void Event::setEvent(const std::string &event)
{
    _description = event;
}