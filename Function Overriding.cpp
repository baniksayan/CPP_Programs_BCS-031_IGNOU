#include <iostream>
using namespace std;

// Function Overriding
class Addition {
public:
    void addTwoIntegers(int num1, int num2) {
        // Adds two integers and prints the result
        cout << "Addition of 2 integers = " << num1 + num2;
    }
};

class Sum : public Addition {
public:
    void addThreeIntegers(int num1, int num2, int num3) {
        // Adds three integers and prints the result
        cout << "Addition of 3 integers = " << num1 + num2 + num3;
    }
};

int main() {
    Sum x;
    x.addTwoIntegers(10, 20);
    
    return 0;
}
