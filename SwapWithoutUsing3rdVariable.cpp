// Write a C++ program to swap two numbers without using a third variable.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    // Swapping the entered numbers without a third variable using subtraction.
    a = a - b; // a now contains the difference between a and b
    b = a + b; // b now contains the original value of a
    a = b - a; // a now contains the original value of b

    cout << "Swapping Values are: " << a << " and " << b << " respectively.";
    return 0;
}
