/*Write a C++ program to find the sum of two given numbers.*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2, sum;

    // Input the two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Calculate the sum
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
