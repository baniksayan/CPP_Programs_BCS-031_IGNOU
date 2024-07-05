#include <iostream>
#include <cstring>
using namespace std;

// Class definition
class Car {
private:
    // Private members are not directly accessible outside the class
    string brand;
    int year;

public:
    // Public members can be accessed from outside the class

    // Constructor with parameters
    Car(string b, int y) : brand(b), year(y) {}

    // Public member functions to access private members
    void setBrand(string b) {
        brand = b;
    }

    string getBrand() const {
        return brand;
    }

    void setYear(int y) {
        year = y;
    }

    int getYear() const {
        return year;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar("Toyota", 2022);

    // Access and modify object's properties using public member functions
    cout << "Brand: " << myCar.getBrand() << ", Year: " << myCar.getYear() << endl;

    myCar.setYear(2023);
    cout << "Updated Year: " << myCar.getYear() << endl;

    return 0;
}
