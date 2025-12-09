#include "HTML.h"
#include "Student.h"

int main()
{
    Student arr[5] = {
        Student("S101", "Ali", 85),
        Student("S102", "Ayşe", 90),
        Student("S103", "Mehmet", 78),
        Student("S104", "Fatma", 88),
        Student("S105", "Can", 95)};

    HTML table(arr, 5);
    cout << table;

    return 0;
}
