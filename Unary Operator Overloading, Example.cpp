#include <iostream>
using namespace std;

class MyClass {
    private:
    int varA, varB, varC;

    public:
    MyClass(int x, int y, int z) {
        varA = x;
        varB = y;
        varC = z;
    }

    void operator+() {
        // Increment varA by 10
        varA = this-> varA + 10;

        // Decrement varB by 20
        varB = this-> varB - 20;

        // Multiply varC by 10
        varC = this-> varC * 10;
    }

    void output() {
        cout << "varA = " << varA << endl;
        cout << "varB = " << varB << endl;
        cout << "varC = " << varC << endl;
    }
};

int main() {
    // Create an object of MyClass with initial values
    MyClass obj(20, 30, 40);

    // Use the overloaded + operator on the object
    +obj;

    // Output the updated values
    obj.output();

    return 0;
}
