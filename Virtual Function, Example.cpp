#include <iostream>
using namespace std;

class Base {
public:
    // Display function in the base class
    virtual void display() {
        cout << "I'm in Base class.";
    }
};

class Derived : public Base {
public:
    // Display function in the derived class
    void display() {
        cout << "I'm in Derived class.";
    }
};

int main() {
    Derived x;
    Base* y;
    y = &x;
    y->display();
    
    return 0;
}
