/*Write a program in C++ to define a class ‘‘Teacher’’ with a virtual function ‘‘Salary’’.
Derive the class ‘‘Assistant Professor’’ from the class ‘‘Teacher’’ and implement the salary function.
Make necessary assumptions.*/

#include <iostream>
using namespace std;

// Base class Teacher
class Teacher {
public:
    virtual double Salary() const {
        // Assuming a default salary for teachers
        return 50000.0;
    }
};

// Derived class Assistant Professor
class AssistantProfessor : public Teacher {
public:
    double Salary() const override {
        // Assuming the salary for Assistant Professors is higher than the default salary for teachers
        return 60000.0;
    }
};

int main() {
    // Create objects
    Teacher teacher;
    AssistantProfessor assistantProfessor;

    // Call the Salary() function for both objects
    cout << "Salary of Teacher: $" << teacher.Salary() << endl;
    cout << "Salary of Assistant Professor: $" << assistantProfessor.Salary() << endl;

    return 0;
}
