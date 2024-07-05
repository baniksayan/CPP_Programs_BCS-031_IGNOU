#include <iostream>
#include <cstring>
using namespace std;

// Creating a class Employee and a derived class PartTimeEmployee to demonstrate the scenario
class Employee {
private:
    char name[40];
    char address[40];
    int age;

protected:
    Employee(char employeeName[], char employeeAddress[], int employeeAge) {
        strcpy(name, employeeName);
        strcpy(address, employeeAddress);
        age = employeeAge;
    }

    void printDetails() {
        cout << "\nName: " << name
            << "\nAddress: " << address
            << "\nAge: " << age;
    }
};

class PartTimeEmployee : protected Employee {
private:
    int numberOfDaysWorked;
    long paymentPerDay;
    long totalPay;

public:
    PartTimeEmployee(char employeeName[], char employeeAddress[],
                    int employeeAge, int daysWorked, long payment) : Employee(employeeName,
                    employeeAddress, employeeAge) {

        numberOfDaysWorked = daysWorked;
        paymentPerDay = payment;
        totalPay = numberOfDaysWorked * paymentPerDay;
    }

    void displayDetails() {
        printDetails();
        cout << "\nNumber of days worked: " << numberOfDaysWorked
            << "\nPayment per day: " << paymentPerDay
            << "\nTotal pay: " << totalPay;
    }
};

int main() {
    PartTimeEmployee employee("Sayan Banik", "Cooch Behar, West Bengal, India", 19, 12, 1000);
    employee.displayDetails();

    return 0;
}

