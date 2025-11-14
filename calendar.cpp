#include "Calendar.h"
#include <fstream> 
#include <cctype>

void Calendar::Run() {
    Draw();
    char command;
    do {
        cout << "\nOptions:\n"
             << "N - Next month\n"
             << "P - Previous month\n"
             << "C - Custom date\n"
             << "A - Add event\n"
             << "L - List events\n"
             << "D - Delete event\n"
             << "S - Save events\n"
             << "R - Load events\n"
             << "Q - Quit\n"
             << "Enter your choice: ";

        cin >> command;
        switch (toupper(command)) {
            case 'N': NextMonth(); break;
            case 'P': PreviousMonth(); break;
            case 'C': ChooseDate(); break;
            case 'A': CreateEvent(); break;
            case 'L': ListEvents(); break;
            case 'D': DeleteEvent(); break;
            case 'S': SaveEvents(); break;
            case 'R': LoadEvents(); break;
            case 'Q': cout << "Goodbye!\n"; break;
            default: cout << "Invalid command.\n"; break;
        }
    } while (toupper(command) != 'Q');
}

void Calendar::Draw() {
    int year = currentDate.GetYear();
    int month = currentDate.GetMonth(); 

    const string months[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    int daysInMonth[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

    bool leap = false;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        leap = true;
    if (leap)
        daysInMonth[2] = 29;

    int y, c, m; 
    if (month == 1 || month == 2) {
        y = (year - 1) % 100;
        c = (year - 1) / 100;
        m = month + 12;
    } else {
        y = year % 100;
        c = year / 100;
        m = month;
    }
    int week = ((y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10) % 7 + 7) % 7;

    cout << "\n" << months[month] << " " << year << "\n";
    cout << "Sun Mon Tue Wed Thu Fri Sat\n";

    int currentDay = 1;
    for (int i = 0; i < week; i++)
        cout << "    ";

    for (int i = week; currentDay <= daysInMonth[month]; i++) {
        cout << setw(2) << currentDay << "  ";
        if (i % 7 == 6)
            cout << "\n";
        currentDay++;
    }
    cout << "\n";
}

void Calendar::NextMonth() {
    currentDate.NextMonth();
    Draw();
}

void Calendar::PreviousMonth() {
    currentDate.PreviousMonth();
    Draw();
}

void Calendar::ChooseDate() {
    cout << "Input Date:\n" << "Input month and year: ";
    int month, year;
    cin >> month >> year;
    while (month < 1 || month > 12 || year < 0) {
        cout << "Invalid Input. Try Again: ";
        cin >> month >> year;
    }
    currentDate.SetMonth(month);
    currentDate.SetYear(year);
    Draw();
}

void Calendar::CreateEvent() {
    int d, m, y;
    string desc;
    cout << "Enter (day, month, year): ";
    cin >> d >> m >> y;
    cout << "Enter description: ";
    cin.ignore();
    getline(cin, desc);
    Date eventDate(y, m, d);
    Event newEvent(eventDate, desc);
    events.push_back(newEvent);
    cout << "Event created.\n";
}

void Calendar::ListEvents() {
    if (events.empty()) {
        cout << "No Events.\n";
        return;
    }
    for (size_t i = 0; i < events.size(); ++i) {
        Date d = events[i].GetDate();
        cout << i + 1 << ". "
             << d.GetYear() << "/"
             << d.GetMonth() << "/"
             << d.GetDay() << " - "
             << events[i].GetDescription() << endl;
    }
}

void Calendar::DeleteEvent() {
    ListEvents();
    cout << "Enter ID to delete: ";
    int id;
    cin >> id;

    if (id < 1 || id > events.size()) {
        cout << "Invalid ID.\n";
        return;
    }
    events.erase(events.begin() + (id - 1));
    cout << "Event deleted.\n";
}

void Calendar::SaveEvents() {
    cout << "Enter saving file name: ";
    string filename;
    cin.ignore();
    getline(cin, filename);

    ofstream outFile(filename);
    if (!outFile) {
        cout << "Error opening file for writing.\n";
        return;
    }

    for (const auto& event : events) {
        Date d = event.GetDate();
        outFile << d.GetYear() << " "
                << d.GetMonth() << " "
                << d.GetDay() << " "
                << event.GetDescription() << "\n";
    }

    outFile.close();
    cout << "Events saved to file.\n";
}

void Calendar::LoadEvents() {
    cout << "Enter loading file name: ";
    string filename;
    cin.ignore();
    getline(cin, filename);
    ifstream infile(filename);
    if (!infile) {
        cout << "Error opening file!\n";
        return;
    }

    events.clear();
    int y, m, d;
    string desc;

    while (infile >> y >> m >> d) {
        getline(infile >> ws, desc);
        Date date(y, m, d);
        events.push_back(Event(date, desc));
    }

    infile.close();
    cout << "Events loaded from file.\n";
}