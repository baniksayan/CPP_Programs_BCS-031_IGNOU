/*Write a program in C++ to create a class Employee with basic data members such as name, address, age.
Create a class Part_time employee which inherits from the Employee class.
Part_time class should have a function to display the name address and payment of the part-time employee.*/

#include <iostream>
#include <string>
using namespace std;

// Define the base class 'Employee'
class Employee {
public:
    // Data members for basic employee information
    string name;
    string address;
    int age;
};

// Define the derived class 'Part_time', inheriting from 'Employee'
class Part_time : public Employee {
public:
    // Additional data member specific to part-time employees
    float payment;

    // Function to display part-time employee information
    void display() {
        cout << "Name: " << name << endl;       // Display employee's name
        cout << "Address: " << address << endl; // Display employee's address
        cout << "Payment: " << payment << endl; // Display employee's payment
    }
};

int main() {
    // Create a part-time employee object
    Part_time p1;

    // Assign values to the data members of the part-time employee
    p1.name = "Sayan B";            // Assign the employee's name
    p1.address = "Cooch Behar";  // Assign the employee's address
    p1.age = 19;                 // Assign the employee's age
    p1.payment = 1000.0;         // Assign the employee's payment

    // Display part-time employee information using the 'display()' function
    p1.display();

    return 0;
}
