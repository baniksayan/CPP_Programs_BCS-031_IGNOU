// Write a C++ program to swap two numbers using a third variable.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    // Swapping the entered numbers using a third variable.
    c = a; // Store the value of 'a' in 'c'
    a = b; // Store the value of 'b' in 'a'
    b = c; // Store the original value of 'a' (which is now in 'c') in 'b'

    cout << "Swapping Values are: " << a << " and " << b << " respectively.";
    return 0;
}
