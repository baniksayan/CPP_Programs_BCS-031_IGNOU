#include <iostream>
using namespace std;

int main() {
    double x, y;

    // Input coordinates
    cout << "Enter the coordinates (x y): ";
    cin >> x >> y;

    if (x == 0 && y == 0) {
        cout << "The point lies at the origin." << endl;
    } else if (x == 0) {
        cout << "The point lies on the y-axis." << endl;
    } else if (y == 0) {
        cout << "The point lies on the x-axis." << endl;
    } else {
        cout << "The point does not lie on any axis." << endl;
    }

    return 0;
}
