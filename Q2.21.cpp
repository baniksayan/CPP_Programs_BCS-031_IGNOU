#include <iostream>
using namespace std;

int main() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    double area = 3.14 * radius * radius;
    double circumference = 2 * 3.14 * radius;

    if (area > circumference) {
        cout << "Area is greater than circumference." << endl;
    } else {
        cout << "Circumference is greater than or equal to area." << endl;
    }

    return 0;
}
