/* Write a program in C++ to compute the salaries of Employees of an organization who are having different designations.
Use Virtual Base Class or Classes.
Make necessary assumptions. */

#include <iostream>
using namespace std;

// Base class for Employee
class Employee {
public:
    string name;
    int empId;
    int basicSalary;

    Employee(string name, int empId, int basicSalary)
        : name(name), empId(empId), basicSalary(basicSalary) {}

    // Virtual function to calculate the salary based on designation-specific bonuses
    virtual int calculateSalary() const {
        return basicSalary;
    }
};

// Derived classes for different designations
class Manager : virtual public Employee {
public:
    int managerBonus;

    Manager(string name, int empId, int basicSalary, int managerBonus)
        : Employee(name, empId, basicSalary), managerBonus(managerBonus) {}

    // Override the base class function to include the manager bonus
    int calculateSalary() const override {
        return basicSalary + managerBonus;
    }
};

class Engineer : virtual public Employee {
public:
    int engineerBonus;

    Engineer(string name, int empId, int basicSalary, int engineerBonus)
        : Employee(name, empId, basicSalary), engineerBonus(engineerBonus) {}

    // Override the base class function to include the engineer bonus
    int calculateSalary() const override {
        return basicSalary + engineerBonus;
    }
};

class Technician : virtual public Employee {
public:
    int technicianBonus;

    Technician(string name, int empId, int basicSalary, int technicianBonus)
        : Employee(name, empId, basicSalary), technicianBonus(technicianBonus) {}

    // Override the base class function to include the technician bonus
    int calculateSalary() const override {
        return basicSalary + technicianBonus;
    }
};

int main() {
    // Create instances of employees with different designations
    Manager manager("John Doe", 101, 50000, 10000);
    Engineer engineer("Jane Smith", 102, 40000, 8000);
    Technician technician("Mike Johnson", 103, 35000, 5000);

    // Calculate and display the salaries of employees
    cout << "Manager Salary: " << manager.calculateSalary() << endl;
    cout << "Engineer Salary: " << engineer.calculateSalary() << endl;
    cout << "Technician Salary: " << technician.calculateSalary() << endl;

    return 0;
}
