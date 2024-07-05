/* Write a C++ program to calculate the diagonal of a cube given its side length.
Use the formula: Diagonal of a cube = √3 × side */

#include <iostream> // Include the input-output stream library
#include <cmath>    // Include the math library for sqrt function
using namespace std;

int main() {
    double sideLength; // Declare a variable to store the side length of the cube
    double diagonal;   // Declare a variable to store the diagonal length

    // Prompt the user to enter the side length of the cube
    cout << "Enter the side length of the cube: ";
    cin >> sideLength;

    // Calculate the diagonal using the formula: diagonal = sqrt(3) * sideLength
    diagonal = sqrt(3) * sideLength;

    // Display the calculated diagonal length
    cout << "The diagonal of the cube is: " << diagonal << endl;

    return 0; // Indicate successful completion of the program
}
