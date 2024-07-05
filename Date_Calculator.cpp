/* Write a C++ code, to calculate the date after 60 days from 26-06-2023 */

#include <iostream>
using namespace std;

// Function to check if the given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a given month and year
int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

// Function to calculate the date after a specified number of days
void calculateDateAfterDays(int startDay, int startMonth, int startYear,
                            int daysToAdd, int &endDay, int &endMonth, int &endYear) {
    endDay = startDay;
    endMonth = startMonth;
    endYear = startYear;

    while (daysToAdd > 0) {
        int daysInCurrentMonth = getDaysInMonth(endMonth, endYear);
        int daysLeftInMonth = daysInCurrentMonth - endDay + 1;

        if (daysToAdd >= daysLeftInMonth) {
            daysToAdd -= daysLeftInMonth;
            endDay = 1;
            if (endMonth == 12) {
                endMonth = 1;
                endYear++;
            } else {
                endMonth++;
            }
        } else {
            endDay = endDay + daysToAdd;
            daysToAdd = 0;
        }
    }
}

int main() {
    // Input the starting date
    int startDay = 26;
    int startMonth = 6;
    int startYear = 2023;

    // Number of days to add
    int daysToAdd = 60;

    // Calculate the date after adding the days
    int endDay, endMonth, endYear;
    calculateDateAfterDays(startDay, startMonth, startYear, daysToAdd, endDay, endMonth, endYear);

    // Output the result
    cout << "Starting Date: " << startDay << "-" << startMonth << "-" << startYear << endl;
    cout << "Date after " << daysToAdd << " days: " << endDay << "-" << endMonth << "-" << endYear << endl;

    return 0;
}
