/*member function and the friend function in one code*/

#include <iostream>
using namespace std;

// Class definition
class MyClass {
private:
    int value;  // Private member variable to store the value

public:
    // Constructor to initialize the value to 0
    MyClass() : value(0) {}

    // Member function to set the value of the private member
    void setValue(int newValue) {
        value = newValue;
    }

    // Member function to get the value of the private member
    int getValue() {
        return value;
    }

    // Declaration of the friend function
    friend void setPrivateValue(MyClass& obj, int newValue);
};

// Definition of the friend function
void setPrivateValue(MyClass& obj, int newValue) {
    obj.value = newValue;  // Modifying the private member using the friend function
}

int main() {
    MyClass obj;
    obj.setValue(42);
    cout << "Value using member function: " << obj.getValue() << endl;

    setPrivateValue(obj, 99);
    cout << "Value using friend function: " << obj.getValue() << endl;

    return 0;
}
