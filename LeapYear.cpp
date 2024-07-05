#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter the year: ";
    cin >> year;

    int isLeapYear = 0;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                isLeapYear = 1;
            }
        } else {
            isLeapYear = 1;
        }
    }

    if (isLeapYear) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
