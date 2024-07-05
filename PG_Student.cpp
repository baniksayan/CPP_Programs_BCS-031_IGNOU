#include<iostream>  // Including the necessary header file for input/output stream.
#include<cstring>   // Including the necessary header file for handling C-style strings.
using namespace std;  // Using the standard namespace to avoid explicitly writing std:: before standard library elements.

class Student {
    protected:
    string name;      // Declaring a protected member variable 'name' of type string.
    string address;   // Declaring a protected member variable 'address' of type string.
    int age;          // Declaring a protected member variable 'age' of type int.

    public:
    Student(string name, string address, int age): name(name), address(address), age(age)
    {}  // Constructor for the 'Student' class. It initializes the member variables with the provided values.

    void displayStudent() {
        cout<<"\nName: "<<name;      // Displaying the 'name' of the student.
        cout<<"\nAddress: "<<address;  // Displaying the 'address' of the student.
        cout<<"\nAge: "<<age;          // Displaying the 'age' of the student.
    }
};

class PG_student: public Student {
    private:
    string subject;  // Declaring a private member variable 'subject' of type string.

    public:
    PG_student (string name, string address, int age, string subject): Student(name, address, age), subject(subject)
    {}  // Constructor for the 'PG_student' class. It initializes the base class 'Student' and the 'subject' variable.

    void displayPG_student() {
        displayStudent();  // Calling the 'displayStudent' function from the base class to show common information.

        cout<<"\nSubject: "<<subject;  // Displaying the 'subject' of the PG student.
    }
};

int main() {
    PG_student pgs("Dipti Biswas", "MadariHat", 18, "Computer Science");
    // Creating an instance of 'PG_student' with provided values.
    pgs.displayStudent();  // Displaying the basic student information using 'displayStudent' method.
    pgs.displayPG_student();  // Displaying the PG student information using 'displayPG_student' method.
}
