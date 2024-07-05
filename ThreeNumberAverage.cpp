/*Write a C++ program to find the average three given numbers.
Define appropriate class and methods in the program.*/

#include <iostream>
using namespace std;

// Define a class called AverageCalculator
class AverageCalculator {
private:
    // Private data members to store the three numbers
    double num1, num2, num3;

public:
    // Public method to set the three numbers
    void setNumbers(double n1, double n2, double n3) { //Copy Constructor
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    // Public method to calculate the average
    double calculateAverage() {
        // Calculate the average and return the result
        return (num1 + num2 + num3) / 3.0;
    }
};

int main() {
    double number1, number2, number3;

    // Prompt the user to enter three numbers
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;

    // Create an object of the AverageCalculator class
    AverageCalculator calculator;

    // Set the numbers in the object using the setNumbers() method
    calculator.setNumbers(number1, number2, number3);

    // Calculate the average using the calculateAverage() method
    double average = calculator.calculateAverage();

    // Display the result
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
