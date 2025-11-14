#ifndef CALENDAR_H
#define CALENDAR_H

#include <iostream>
#include <vector>
#include <iomanip>
#include "calendar_date.h"
#include "calendar_event.h"

using namespace std;

class Calendar {
private:
    Date currentDate;
    vector<Event> events;

public:
    void Run();
    void Draw();
    void NextMonth();
    void PreviousMonth();
    void ChooseDate();
    void CreateEvent();
    void ListEvents();
    void DeleteEvent();
    void SaveEvents();
    void LoadEvents();
};

#endif