/*Write a C++ program to demonstrate how objects are passed as an argument.*/

#include <iostream>
using namespace std;

// Class representing a 2D point
class Point {
public:
  int x, y;

  // Constructor to initialize the point's coordinates
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  // Function to print the coordinates of the point
  void print() {
    cout << "(" << x << ", " << y << ")" << endl;
  }
};

// Function to print a Point object
void printPoint(Point p) {
  cout << "The point is: ";
  p.print();
}

int main() {
  // Creating a Point object with coordinates (10, 20)
  Point p1(10, 20);

  // Printing the point using the printPoint function
  printPoint(p1);

  return 0;
}
