#include <iostream>
using namespace std;

const int MAX_LENGTH = 50;

class Employee {
protected:
    char name[MAX_LENGTH];
    char address[MAX_LENGTH];
    int age;

public:
    void getData() {
        cout << "Enter name: ";
        cin.getline(name, MAX_LENGTH);
        cout << "Enter address: ";
        cin.getline(address, MAX_LENGTH);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); // Ignore the remaining newline character
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Age: " << age << endl;
    }
};

class Part_time : public Employee {
private:
    float payment;

public:
    void getPayment() {
        cout << "Enter payment: Rs.";
        cin >> payment;
        cin.ignore(); // Ignore the remaining newline character
    }

    void displayData() {
        Employee::displayData();
        cout << "Payment: Rs." << payment << endl;
    }
};

int main() {
    Part_time pt;

    pt.getData();
    pt.getPayment();
    
    cout << "\nPart-Time Employee Details:\n";
    
    pt.displayData();

return 0;    
}
