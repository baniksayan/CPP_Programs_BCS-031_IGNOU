#include <iostream>
using namespace std;

class Shape { // Base class Shape
public:
    // Virtual function draw
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

// Derived class Circle, inheriting from Shape
class Circle : public Shape {
public:
    // Overriding the draw function from the base class
    void draw() override {
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class Rectangle, inheriting from Shape
class Rectangle : public Shape {
public:
    // Overriding the draw function from the base class
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

// Main function
int main() {
    // Creating objects of Circle and Rectangle using Shape pointers
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    // Calling the draw function for each object
    shape1->draw();
    shape2->draw();

    // Deleting the dynamically allocated objects
    delete shape1;
    delete shape2;

    // Return 0 to indicate successful execution
    return 0;
}
