/* Write a C++ program to calculate the day of the week after 60 days
from a given date (in the format: dd-mm-yyyy).
Ensure the program considers leap years and
provides the result as a day name (e.g., Sunday, Monday, etc.). */

#include <iostream>
using namespace std;

// Function to check if a given year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to calculate the day of the week (0 - Sunday, 1 - Monday, ..., 6 - Saturday)
int calculateDayOfWeek(int day, int month, int year) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    year = year - month < 3;
    return (year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
}

int main() {
    // Given date
    int day = 26;
    int month = 6;
    int year = 2023;

    // Add 60 days to the given date
    int daysToAdd = 60;

    // Calculate the day of the week after adding 60 days
    for (int i = 0; i < daysToAdd; i++) {
        // Increment the day by 1
        day++;

        // Check if the current day exceeds the number of days in the current month
        int daysInMonth;

        switch (month) {
            case 2: // February
                daysInMonth = (isLeapYear(year)) ? 29 : 28;
                break;
            case 4: // April
            case 6: // June
            case 9: // September
            case 11: // November
                daysInMonth = 30;
                break;
            default:
                daysInMonth = 31; // January, March, May, July, August, October, December
        }

        // If the day exceeds the number of days in the current month, increment the month and reset the day
        if (day > daysInMonth) {
            day = 1;
            month++;

            // If the month exceeds 12, increment the year and reset the month to January
            if (month > 12) {
                month = 1;
                year++;
            }
        }
    }

    // Calculate the day of the week for the new date
    int dayOfWeek = calculateDayOfWeek(day, month, year);

    // Define the names of the days of the week
    string days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Print the result
    cout << "After 60 days from 26-06-2023, the day is: " << days[dayOfWeek] << endl;

    return 0;
}
