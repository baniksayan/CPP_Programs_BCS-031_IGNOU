/* Write a C++ program that determines whether a given year is a leap year or not.
A leap year is divisible by 4, except for years that are divisible by 100 but not by 400. */

#include <iostream>
using namespace std;

int main() {
  int year;
  cout << "Enter a year: ";
  cin >> year;

  if (year % 400 == 0) {
    cout << year << " is a leap year.\n";
  } else if (year % 4 == 0 && year % 100 != 0) {
    cout << year << " is a leap year.\n";
  } else {
    cout << year << " is not a leap year.\n";
  }

  return 0;
}
