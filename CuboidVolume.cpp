/* Write a C++ program to calculate the volume of a cuboid given its length, width and height.
Use the formula: Volume of a cuboid = l × b × h */

#include <iostream>
#include<cmath>
using namespace std;

// define the main function
int main()
{
    // declare variables for length, width, height and volume
    double length, width, height, volume;

    // prompt the user to enter the length, width and height
    cout << "Enter the length of the cuboid: ";
    cin >> length;

    cout << "Enter the width of the cuboid: ";
    cin >> width;

    cout << "Enter the height of the cuboid: ";
    cin >> height;

    // calculate the volume using the formula
    volume = length * width * height;
    // display the result

    cout << "The volume of the cuboid is: " << volume << endl;
    // return 0 to indicate successful execution

    return 0;
}
