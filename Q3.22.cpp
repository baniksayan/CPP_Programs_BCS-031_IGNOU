#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << "Yes, it's a leap year." << endl;
    } else {
        cout << "No, it's not a leap year." << endl;
    }

    return 0;
}
