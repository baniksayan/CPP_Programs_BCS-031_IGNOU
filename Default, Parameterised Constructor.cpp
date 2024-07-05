#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char name[40];
    char gender[6];
    char address[200]; // Increased size to accommodate longer addresses
    char grade[4];
    int age;
    int totalMarks;
    float percentage;

public:
    Student() {} // Default Constructor

    Student(char n[], char a[], char g[], int ag, int tot, float p, char gr[]) {

// Parameterised Constructor
        strcpy(name, n);
        strcpy(address, a);
        strcpy(gender, g);
        strcpy(grade, gr);
        age = ag;
        totalMarks = tot;
        percentage = p;
    }

    void output() {
        cout << "\nName: " << name;
        cout << "\nAddress: " << address;
        cout << "\nGender: " << gender;
        cout << "\nAge: " << age;
        cout << "\nTotal Marks: " << totalMarks;
        cout << "\nPercentage: " << percentage;
        cout << "\nGrade: " << grade;
    }

// Destructor
    ~Student() {
        cout << "\n\nObject destroyed";
    }
};

int main() {
    Student s1("Sayan Banik", "Patakura, Ranibagan, H.N. Road, Cooch Behar, West Bengal, India",
               "Male", 19, 489, 97.8, "AA");
    Student s2("Sohini Chakraborty", "Gandhikalani, Byangchatra Road, Cooch Behar, West Bengal, India",
               "Female", 16, 492, 98.1, "AA");

    s1.output();
    cout << "\n";
    s2.output();

    return 0;
}
