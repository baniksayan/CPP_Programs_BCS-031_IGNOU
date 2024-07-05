#include <iostream>
using namespace std;

int main() {
    double side1, side2, side3;
    cout << "Enter the lengths of the sides of the triangle: ";
    cin >> side1 >> side2 >> side3;

    if (side1 == side2 && side2 == side3) {
        cout << "Equilateral triangle." << endl;
    } else if (side1 == side2 || side1 == side3 || side2 == side3) {
        cout << "Isosceles triangle." << endl;
    } else {
        cout << "Scalene triangle." << endl;
    }

    return 0;
}
