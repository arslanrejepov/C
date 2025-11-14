#include "calendar_date.h"
#include <ctime>

Date::Date() {
    time_t t = time(0);
    struct tm* now = localtime(&t);
    year = now->tm_year + 1900;
    month = now->tm_mon + 1;
    day = now->tm_mday;
}

Date::Date(int y, int m, int d) : year(y), month(m), day(d) {}

int Date::GetYear() const { return year; }
int Date::GetMonth() const { return month; }
int Date::GetDay() const { return day; }

void Date::SetYear(int y) { year = y; }
void Date::SetMonth(int m) { month = m; }
void Date::SetDay(int d) { day = d; }

void Date::NextMonth() {
    month++;
    if (month > 12) {
        month = 1;
        year++;
    }
}

void Date::PreviousMonth() {
    month--;
    if (month < 1) {
        month = 12;
        year--;
    }
}