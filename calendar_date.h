#ifndef CALENDAR_DATE_H
#define CALENDAR_DATE_H

class Date {
private:
    int year, month, day;

public:
    Date();
    Date(int y, int m, int d);

    int GetYear() const;
    int GetMonth() const;
    int GetDay() const;

    void SetYear(int y);
    void SetMonth(int m);
    void SetDay(int d);

    void NextMonth();
    void PreviousMonth();
};

#endif