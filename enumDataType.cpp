#include <iostream>
using namespace std;

// Enumerated data type definition
enum Days { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };

int main() {
    int dayIndex;

    cout << "Enter a day index (0-6): ";
    cin >> dayIndex;

    if (dayIndex >= MONDAY && dayIndex <= SUNDAY) {
        cout << "The day is: ";
        switch (dayIndex) {
            case MONDAY: cout << "Monday\n"; break;
            case TUESDAY: cout << "Tuesday\n"; break;
            case WEDNESDAY: cout << "Wednesday\n"; break;
            case THURSDAY: cout << "Thursday\n"; break;
            case FRIDAY: cout << "Friday\n"; break;
            case SATURDAY: cout << "Saturday\n"; break;
            case SUNDAY: cout << "Sunday\n"; break;
        }
    } else {
        cout << "Invalid day index\n";
    }

    return 0;
}
