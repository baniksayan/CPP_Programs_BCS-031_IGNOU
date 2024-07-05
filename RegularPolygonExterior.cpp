/* Write a C++ program to calculate the exterior angle of a regular polygon given its number of sides.
Use the formula: Exterior angle of a regular polygon = 360° / n where n is the number of sides */

#include <iostream>
#include <cmath>  // Include the cmath library for mathematical functions
using namespace std;

int main() {
    int numSides;
    double exteriorAngle;

    // Prompt the user to enter the number of sides of the regular polygon
    cout << "Enter the number of sides of the regular polygon: ";
    cin >> numSides;

    // Calculate the exterior angle using the formula: exteriorAngle = 360 degrees / numSides
    exteriorAngle = 360.0 / numSides;

    // Display the calculated exterior angle
    cout << "The exterior angle of the regular polygon with " << numSides << " sides is: " << exteriorAngle << " degrees" << endl;

    return 0;
}
