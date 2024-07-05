/* Write a C++ program to calculate the volume of a cone given its radius and height.
Use the formula: Volume of a cone = ⅓ × π × r² × h */

#include <iostream>
#include<cmath>
using namespace std; // Use the standard namespace

int main() {
    // Declare variables to store radius and height
    double radius, height;

    // Prompt the user to enter the values for radius and height
    cout << "Enter the radius of the cone: ";
    cin >> radius;
    
    cout << "Enter the height of the cone: ";
    cin >> height;

    // Calculate the volume of the cone using the formula V = (1/3) * π * r^2 * h
    double volume = (1.0 / 3.0) * M_PI * radius * radius * height; //The M_PI constant is defined in the <cmath> header file.
                             // It represents the mathematical constant pi, which is approximately equal to 3.142857142857143
    // Display the calculated volume
    cout << "The volume of the cone is: " << volume << " cubic units" << endl;

    return 0; // Return 0 to indicate successful completion
}
