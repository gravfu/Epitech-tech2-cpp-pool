/*
** EPITECH PROJECT, 2020
** cpp_d16_2019
** File description:
** EventManager
*/

#ifndef EVENTMANAGER_HPP_
#define EVENTMANAGER_HPP_

#include <list>
#include "Event.hpp"

class EventManager {
public:
    EventManager () ;
    ~ EventManager () ;
    EventManager ( EventManager const & other ) ;
    EventManager & operator =( EventManager const & rhs ) ;

    void addEvent(const Event &e);
    void removeEventsAt(unsigned int time);
    void dumpEvents() const;
    void dumpEventAt(unsigned int time) const;
    void addTime(unsigned int time);
    void addEventList(std::list<Event> &events);
    static bool sort(const Event &e, const Event &f);

protected:
    std::list<Event> _event;
    unsigned int _current_time;
private:
};

#endif /* !EVENTMANAGER_HPP_ */
