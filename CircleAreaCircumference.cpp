/*Write a C++ program to define class "Circle" and implement the following:
(i) a constructor
(ii) a member function to find area of a circle
(iii) a member function to find circumference of a circle
*/

#include <iostream>
using namespace std;

// Define the Circle class
class Circle {
public:
    float radius; // Member variable to store the radius of the circle

    // Constructor to initialize the radius of the circle
    Circle(float radius) {
        this->radius = radius;
    }

    // Member function to calculate the area of the circle
    float area() {
        return 3.14 * radius * radius;
    }

    // Member function to calculate the circumference of the circle
    float circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    Circle circle(5); // Create a Circle object with a radius of 5

    // Display the area and circumference of the circle
    cout << "The area of the circle is " << circle.area() << endl;
    cout << "The circumference of the circle is " << circle.circumference() << endl;

    return 0;
}
