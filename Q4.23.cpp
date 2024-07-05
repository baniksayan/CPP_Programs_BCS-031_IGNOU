#include <iostream>
using namespace std;

int main() {
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = length * breadth;
    double perimeter = 2 * (length + breadth);

    if (area > perimeter) {
        cout << "Area is greater than perimeter." << endl;
    } else {
        cout << "Perimeter is greater than or equal to area." << endl;
    }

    return 0;
}
