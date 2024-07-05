/*Write a program to demonstrate the catching of all exceptions.*/

#include <iostream>
using namespace std;

int main() {
    try {
        // Some code that may throw exceptions
        int numerator, denominator, result;

        // Input numerator and denominator from the user
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;

        // Check if the denominator is zero, and throw an exception if it is
        if (denominator == 0) {
            throw runtime_error("Division by zero is not allowed.");
        }

        // Perform the division and display the result
        result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (exception& ex) {
        // Catch block for exceptions derived from std::exception
        cerr << "Caught an exception: " << ex.what() << endl;
    }
    catch (...) {
        // Catch-all block for catching any other uncaught exceptions
        cerr << "Caught an unknown exception." << endl;
    }

    cout << "Program continues after exception handling." << endl;
    return 0;
}
