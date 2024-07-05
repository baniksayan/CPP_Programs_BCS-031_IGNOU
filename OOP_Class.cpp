#include <iostream>
#include <string>
using namespace std; // Using namespace directive

// Employee class definition
class Employee {
private:
    // Private member variables
    string name;
    int age;
    double salary;
    static int employeeCount; // Static member variable for counting employees

public:
    // Constructors
    Employee() : name(""), age(0), salary(0.0) {
        employeeCount++;
    }

    Employee(const string& empName, int empAge, double empSalary)
        : name(empName), age(empAge), salary(empSalary) {
        employeeCount++;
    }

    // Destructor
    ~Employee() {
        employeeCount--;
    }

    // Public member functions for encapsulation
    void displayDetails() const {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }

    void updateSalary(double newSalary) {
        salary = newSalary;
    }

    static int getEmployeeCount() {
        return employeeCount;
    }
};

// Initializing static member variable
int Employee::employeeCount = 0;

int main() {
    // Creating employee objects
    Employee emp1("John Doe", 25, 50000.0);
    Employee emp2("Jane Smith", 30, 60000.0);

    // Displaying initial employee details
    emp1.displayDetails();
    emp2.displayDetails();

    // Updating employee salary
    emp1.updateSalary(55000.0);

    // Displaying updated employee details
    emp1.displayDetails();

    // Displaying the total number of employees
    cout << "Total Employees: " << Employee::getEmployeeCount() << endl;

    // Employee objects go out of scope and destructors are called
    // Displaying the total number of employees after some employees are deleted
    cout << "Total Employees after some are deleted: " << Employee::getEmployeeCount() << endl;

    return 0;
}
