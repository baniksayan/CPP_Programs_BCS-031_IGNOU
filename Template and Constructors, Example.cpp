#include<iostream>
using namespace std;

template <typename T>
class MyClass {
    T data;
public:
    // Constructor to initialize the data member
    MyClass(T d) : data(d) {}

    // Display method to print the value of the data member
    void display() {
        cout << "Data = " << data << endl;
    }
};

template <typename T>
void myFunction(T x) {
    // Print the value of the parameter
    cout << "Value = " << x << endl;
}

class Myclass {
public:
    int x;

    // Default constructor
    Myclass() {
        x = 0;
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Myclass(int i) {
        x = i;
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    Myclass(const Myclass& obj) {
        x = obj.x;
        cout << "Copy Constructor" << endl;
    }
};

int main() {
    // Create an object of MyClass with int as the template parameter
    MyClass<int> obj1(5);
    obj1.display();

    // Call the myFunction template function with int as the parameter type
    myFunction(10);

    // Create objects of Myclass
    Myclass obj2;         // Call the default constructor
    Myclass obj3(10);     // Call the parameterized constructor
    Myclass obj4(obj3);   // Call the copy constructor

    return 0;
}
