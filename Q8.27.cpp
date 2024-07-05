#include <iostream>
using namespace std;

int main() {
    int x1, y1, x2, y2, x3, y3;

    // Input coordinates of the three points
    cout << "Enter the coordinates of the first point (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter the coordinates of the second point (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter the coordinates of the third point (x3 y3): ";
    cin >> x3 >> y3;

    // Check if the three points are collinear
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        cout << "All 3 points lie on the same line." << endl;
    } else {
        cout << "The points do not lie on the same line." << endl;
    }

    return 0;
}
