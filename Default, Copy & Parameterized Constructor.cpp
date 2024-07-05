#include <iostream>
#include <cstring> // Include the header file for string functions
using namespace std;

class Student {
    private:
        char name[40];
        char gender[6];
        char address[40];
        char grade[4];
        int age;
        int totalMarks;
        float percentage;

    public:
        Student() { // Default constructor
            strcpy(name, "");
            strcpy(address, "");
            strcpy(gender, "");
            strcpy(grade, "");
            age = 0;
            totalMarks = 0;
            percentage = 0.0;
        }

        Student(const Student& other) { // Copy constructor
            strcpy(name, other.name);
            strcpy(address, other.address);
            strcpy(gender, other.gender);
            strcpy(grade, other.grade);
            age = other.age;
            totalMarks = other.totalMarks;
            percentage = other.percentage;
        }

        Student(char n[], char a[], char g[], int ag, int tot, float p, char gr[]) { // Parameterized constructor
            strcpy(name, n);
            strcpy(address, a);
            strcpy(gender, g);
            strcpy(grade, gr);
            age = ag;
            totalMarks = tot;
            percentage = p;
        }

        void output() {
            cout << "\nName: " << name
                << "\nAddress: " << address
                << "\nGender: " << gender
                << "\nAge: " << age
                << "\nTotal Marks: " << totalMarks
                << "\nPercentage: " << percentage
                << "\nGrade: " << grade;
        }

        ~Student() { // Destructor
            cout << "\n\nObject Destroyed.";
        }
};

int main() {
    Student student1; // Default constructor
    Student student2(student1); // Copy constructor

    Student student3("Sayan Banik", "Cooch Behar, West Bengal", "Male", 19, 498, 95.6, "A"); // Parameterized constructor
    Student student4 = student3; // Copy constructor using assignment operator

    student1.output();
    cout << "\n\n"; // Output formatting
    student2.output();
    cout << "\n\n"; // Output formatting
    student3.output();
    cout << "\n\n"; // Output formatting
    student4.output();

    return 0;
}
