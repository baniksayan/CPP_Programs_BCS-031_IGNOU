/*Write a program in C++ to simulate the environment of a simple calculator.*/

#include <iostream>
using namespace std;

int main() {
    char operation; // To store the selected operation (+, -, *, /)
    double num1, num2; // To store the two input numbers

    cout << "Simple Calculator\n";
    cout << "------------------\n";

    // Prompt the user to enter the desired operation
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Prompt the user to enter the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user to enter the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the operation based on the user's choice
    switch (operation) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            // Check for division by zero to avoid runtime errors
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            // If an invalid operation is entered, show an error message
            cout << "Error: Invalid operation entered.\n";
    }

    return 0; // Exit the program
}
