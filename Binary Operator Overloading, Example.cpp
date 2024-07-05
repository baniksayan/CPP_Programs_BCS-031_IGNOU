#include<iostream>
using namespace std;

class ClassABC {
    private:
    int variableA, variableB, variableC; // Private variables representing A, B, and C
    
    public:
    ClassABC() {} // Default constructor
    
    ClassABC(int x, int y, int z) {
        variableA = x; // Initialize variableA with x
        variableB = y; // Initialize variableB with y
        variableC = z; // Initialize variableC with z
    }
    
    ClassABC(ClassABC &obj) {
        variableA = obj.variableA; // Copy variables from obj
        variableB = obj.variableB;
        variableC = obj.variableC;
    }
    
    ClassABC operator+ (ClassABC obj) {
        ClassABC result; // Create a new object to store the result
        result.variableA = variableA + obj.variableA; // Add variables' values
        result.variableB = variableB + obj.variableB;
        result.variableC = variableC + obj.variableC;
        return result; // Return the resulting object
    }
    
    void output() {
        cout << "Variable A = " << variableA << endl; // Print the value of variables
        cout << "Variable B = " << variableB << endl;
        cout << "Variable C = " << variableC << endl;
    }
};

int main() {
    ClassABC objectP(20, 30, 40), objectQ(34, 56, 78); // Create objects with initial values
    ClassABC objectR; // Create an object to store the result
    objectR = objectP + objectQ; // Perform addition using the operator+ function
    objectR.output(); // Output the result
    
    return 0;
}
