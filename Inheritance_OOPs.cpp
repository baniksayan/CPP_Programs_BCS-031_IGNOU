#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function for polymorphism
    virtual double getArea() const {
        return 0.0;
    }
};

// Derived class
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor with parameters
    Circle(double r) : radius(r) {}

    // Override base class function
    double getArea() const override {
        return 3.14 * radius * radius;
    }
};

int main() {
    // Create objects of the derived class
    Circle myCircle(5.0);

    // Access overridden function through base class pointer
    Shape* shapePtr = &myCircle;
    cout << "Area of the Circle: " << shapePtr->getArea() << endl;

    return 0;
}
