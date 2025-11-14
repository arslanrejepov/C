#include "calendar_event.h"
#include <string> 

Event::Event(Date d, const std::string& desc) : date(d), description(desc) {}

Date Event::GetDate() const {
    return date;
}

std::string Event::GetDescription() const {
    return description;
}