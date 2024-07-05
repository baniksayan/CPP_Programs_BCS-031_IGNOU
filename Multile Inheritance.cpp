#include <iostream>

using namespace std;

// Base class 1
class Shape {
public:
    void displayShape() {
        cout << "This is a shape." << endl;
    }
};

// Base class 2
class Color {
public:
    void displayColor() {
        cout << "This shape is colored." << endl;
    }
};

// Derived class
class Rectangle : public Shape, public Color {
public:
    void displayRectangle() {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    Rectangle rect;
    rect.displayShape();   // Calls the displayShape() function from the Shape class
    rect.displayColor();   // Calls the displayColor() function from the Color class
    rect.displayRectangle();// Calls the displayRectangle() function from the Rectangle class
    
    return 0;
}
