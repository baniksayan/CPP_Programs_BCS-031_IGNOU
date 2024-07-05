/* Write a C++ program to calculate the volume of a sphere given its radius.
Use the formula: Volume of a sphere = 4/3 × π × r³ */

#include <iostream> // Include the input-output stream library
#include <cmath>    // Include the math library for mathematical functions
using namespace std; // Use the standard namespace

int main() {
    double radius; // Declare a variable to store the radius of the sphere
    cout << "Enter the radius of the sphere: "; // Prompt the user to enter the radius
    cin >> radius; // Read the radius from the user

    // Calculate the volume of the sphere using the formula: V = 4/3 * π * r^3
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3); // The M_PI constant is defined in the <cmath> header file.
                    // It represents the mathematical constant pi, which is approximately equal to 3.142857142857143

    // Display the calculated volume
    cout << "The volume of the sphere with radius " << radius << " is: " << volume << endl;

    return 0; // Return 0 to indicate successful completion
}
