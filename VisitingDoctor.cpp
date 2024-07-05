/*Write a program in C++ to create class Doctor with a virtual function salary.
Derive class Visiting - Doctor and implement function salary in it.*/

#include<iostream>
using namespace std;

// Base class Doctor
class Doctor{ 
    public:
        // Virtual function salary
        virtual void salary() {
            cout << "Salary of Doctor" << endl;
        }
};

// Derived class Visiting - Doctor
class Visiting_Doctor : public Doctor {
    public:
        // Implementing function salary
        void salary() {
            cout << "\nSalary of Visiting_Doctor\n" << endl;
        }
};

int main() {
    // Creating object of derived class
    Visiting_Doctor vd;
    // Calling function salary
    vd.salary();
    return 0;
}
