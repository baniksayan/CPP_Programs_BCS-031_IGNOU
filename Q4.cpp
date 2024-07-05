#include <iostream>
using namespace std;

int main() {
    double radius, height;

    cout << "Enter the radius of the cylinder: ";
    cin >> radius;

    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // Calculate the volume of the cylinder
    double volume = 3.14159 * radius * radius * height;

    cout << "The volume of the cylinder is: " << volume << endl;

    return 0;
}
