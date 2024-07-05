/* Write a C++ program to calculate the volume of a cylinder given its radius and height.
Use the formula: Volume of a cylinder = π × r² × h */

#include <iostream> // Include the necessary library for input and output
#include <cmath>
using namespace std; // Use the standard namespace

int main() {
    // Declare variables to store radius, height, and volume
    double radius, height, volume;

    // Prompt the user to enter the radius of the cylinder
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    // Prompt the user to enter the height of the cylinder
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder using the formula: V = π * r^2 * h
    volume = M_PI * radius * radius * height; //The M_PI constant is defined in the <cmath> header file
       // It represents the mathematical constant pi, which is approximately equal to 3.142857142857143

    // Display the calculated volume
    cout << "The volume of the cylinder is: " << volume << endl;

    return 0; // Indicate successful program execution
}
