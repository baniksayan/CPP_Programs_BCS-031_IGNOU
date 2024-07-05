/*Write a program in C++ to define a class "Teacher's with a virtual function "Salary".
Derive class "Associate-Professor" from class teacher and implement the salary function.*/

#include <iostream>
using namespace std;

// Base class "Teacher"
class Teacher {
public:
    // Virtual function "Salary" is declared as pure virtual with "= 0"
    // This makes the "Teacher" class an abstract class, meaning it cannot be accessed directly.
    // Each derived class must override this function to provide its own implementation.
    virtual int Salary() = 0;
};

// Derived class "Associate_Professor" from "Teacher"
class Associate_Professor : public Teacher {
public:
    // Override the virtual function "Salary" to provide the salary calculation for Associate Professors.
    int Salary() {
        return 100000; // In this example, the salary for an Associate Professor is fixed at Rs.100,000.
    }
};

int main() {
    // Create an object of the "Associate_Professor" class
    Associate_Professor obj;

    // Call the "Salary" function for the Associate Professor object
    // The Salary() function will return the salary for an Associate Professor as defined in the derived class.
    cout << "Salary of Associate Professor: \n" << obj.Salary();

    return 0;
}
