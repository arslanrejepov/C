#ifndef CALENDAR_EVENT_H
#define CALENDAR_EVENT_H

#include "calendar_date.h"
#include <string>

class Event {
private:
    Date date;
    std::string description;

public:
    Event(Date d, const std::string& desc);
    Date GetDate() const;
    std::string GetDescription() const;
};

#endif
