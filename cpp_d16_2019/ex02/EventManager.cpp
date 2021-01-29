/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** EventManager
*/

#include "EventManager.hpp"

EventManager::EventManager ()
{
    _current_time = 0;
}

EventManager::~EventManager ()
{

}
EventManager::EventManager ( EventManager const & other )
{
    _event = other._event;
    _current_time = other._current_time;
}

EventManager & EventManager::operator =( EventManager const & rhs )
{
    _event = rhs._event;
    _current_time = rhs._current_time;
    return *this;
}

bool EventManager::sort(const Event &e, const Event &f)
{
    if (e.getTime() < f.getTime())
        return true;
    return false;
}

void EventManager::addEvent(const Event &e)
{
    if (e.getTime() >= _current_time)
        _event.push_back(e);
    _event.sort(sort);
}

void EventManager::removeEventsAt(unsigned int time)
{
    for (std::list<Event>::iterator i = _event.begin(); i!= _event.end();) {
        if (i->getTime() == time)
            _event.erase(i++);
        else
            ++i;
    }
}

void EventManager::dumpEvents() const
{
    for(auto const i : _event) {
        std::cout << i.getTime() << ": " << i.getEvent() << std::endl;
    }
}

void EventManager::dumpEventAt(unsigned int time) const
{
    for(auto const i : _event) {
        if (i.getTime() == time)
            std::cout << i.getTime() << ": " << i.getEvent() << std::endl;
    }
}

void EventManager::addTime(unsigned int time)
{
    _current_time += time;
    for (std::list<Event>::iterator i = _event.begin(); i!= _event.end();) {
        if (i->getTime() <= _current_time) {
            std::cout << i->getEvent() << std::endl;
            _event.erase(i++);
        } else
            ++i;
    }
}

void EventManager::addEventList(std::list<Event> &events)
{
    for(auto i : events) {
        if (i.getTime() >= _current_time)
            _event.push_back(i);
    }
    _event.sort(sort);
}