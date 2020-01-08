#include <iostream>
#include <string>

#include "Event.h"

Event::Event() {
}

Event::~Event() {
}

void Event::setEventId(int x)
{
    Event::event_id = x;
}

int Event::getEventId() const
{
    return Event::event_id;
}

void Event::setEventName(string c)
{
    Event::event_name = c;
}

string Event::getEventName() const
{
    return Event::event_name;
}

void Event::setDateTime(string c)
{
    Event::date_time = c;
}

string Event::getDateTime() const
{
    return Event::date_time;
}

void Event::printElements() const
{
    
}

