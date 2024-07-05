/*Write a program to implement the concept of abstract class in C++.*/

#include <iostream>
using namespace std; // Using namespace to avoid explicit qualification

// Abstract class
class Shape {
public:
    // Pure virtual function, making Shape an abstract class
    virtual void draw() = 0;

    // Virtual destructor is necessary for proper cleanup of derived classes
    virtual ~Shape() {}
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
    // You cannot create an instance of an abstract class directly
    // Shape shape; // This will give an error

    // However, you can use pointers or references to abstract class types
    Shape* shape1 = new Rectangle();
    Shape* shape2 = new Circle();

    shape1->draw(); // Calls the draw() function of the Rectangle class
    shape2->draw(); // Calls the draw() function of the Circle class

    // Don't forget to delete dynamically allocated objects
    delete shape1;
    delete shape2;

    return 0;
}
