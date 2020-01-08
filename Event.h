#ifndef EVENT_H
#define EVENT_H

#include <iostream>
#include <vector>
#include <string>
#include "Market.h"

using namespace std;


class Event
{
private:
    int event_id;
    string event_name;
    string date_time;
    
public:
    Event();
    virtual ~Event();
    
    void setEventId(int);
    int getEventId() const;
    void setEventName(string);
    string getEventName() const;
    void setDateTime(string);
    string getDateTime() const;
    virtual void printElements() const;
};

#endif /* EVENT_H */

