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
        Student(char n[], char a[], char g[], int ag, int tot, float p, char gr[]) { // Constructor
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
    Student student1("Sayan Banik", "Cooch Behar, West Bengal", "Male", 19, 498, 95.6, "A");
    Student student2("Sohini Chakraborty", "Cooch Behar, West Bengal", "Female", 16, 500, 96.2, "A");

    student1.output();
    cout << "\n\n"; // Output formatting
    student2.output();

    return 0;
}
