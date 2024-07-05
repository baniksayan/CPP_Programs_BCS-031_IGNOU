#include<iostream>
using namespace std;

// Function Overloading
class PolymorphicAddition {
public:
    // Function to add two integers
    void add(int num1, int num2) {
        cout << "Addition of two integers = " << num1 + num2 << endl;
    }

    // Function to add two floats
    void add(float num1, float num2) {
        cout << "Addition of two floats = " << num1 + num2 << endl;
    }

    // Function to add two doubles
    void add(double num1, double num2) {
        cout << "Addition of two doubles = " << num1 + num2 << endl;
    }
};

int main() {
    PolymorphicAddition x;

    // Perform addition using different data types
    x.add(10, 20);
    x.add(22.33, 55.6347);
    x.add(21548964, 12547963);

    return 0;
}
