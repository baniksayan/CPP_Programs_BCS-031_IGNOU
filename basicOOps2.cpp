#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
    int age;
    string name;
    int workingHours;
    string gender;
    char expertIn;

public:
    // Constructors
    Employee() : age(0), workingHours(0), expertIn(' ') {}

    Employee(int age, const string& name, int workingHours, const string& gender, char expertIn)
        : age(age), name(name), workingHours(workingHours), gender(gender), expertIn(expertIn) {}

    // Setter functions
    void setAge(int newAge) {
        age = newAge;
    }

    void setName(const string& newName) {
        name = newName;
    }

    void setWorkingHours(int newWorkingHours) {
        workingHours = newWorkingHours;
    }

    void setGender(const string& newGender) {
        gender = newGender;
    }

    void setExpertise(char newExpertIn) {
        expertIn = newExpertIn;
    }

    // Getter functions
    int getAge() const {
        return age;
    }

    const string& getName() const {
        return name;
    }

    int getWorkingHours() const {
        return workingHours;
    }

    const string& getGender() const {
        return gender;
    }

    char getExpertise() const {
        return expertIn;
    }

    // Display function
    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Working Hours: " << workingHours << endl;
        cout << "Expertise: " << expertIn << endl;
    }
};

int main() {
    // Example usage of the Employee class
    Employee emp1(20, "Sayan Banik", 40, "Male", 'A');
    emp1.displayInfo();

    // Update information
    emp1.setWorkingHours(45);
    emp1.setName("Alexa, Play!");
    emp1.displayInfo();

    return 0;
}
