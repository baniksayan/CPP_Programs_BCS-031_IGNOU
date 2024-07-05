#include <iostream>
using namespace std;

class BaseClass {
public:
    virtual void Display() = 0; // Pure virtual method.
    void UnnamedMethod() {
        cout << "Unremarkable.";
    }
};

class DerivedClass : public BaseClass {
public:
    void Display() override {
        cout << "Anonymous.";
    }
};

int main() {
    DerivedClass x; // Declare an object of DerivedClass.
    x.Display(); // Call the Display() method of DerivedClass.
    return 0;
}
