#include <iostream>

using namespace std;

// Base class
class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void display() {
        cout << "This is a rectangle." << endl;
    }
};

int main() {
    Rectangle rect;
    rect.display(); // Calls the display() function of the derived class
    
    return 0;
}
