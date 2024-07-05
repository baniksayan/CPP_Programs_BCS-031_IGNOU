#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    char name[40];
    char gender[10];
    char address[40];
    char grade[10];
    int age;
    int totalMarks;
    float percentage;

public:
    Student() {}    // Default Constructor
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

//Copy Constructor
    Student(Student &s) {
        strcpy(name, s.name);
        strcpy(address, s.address);
        strcpy(gender, s.gender);
        strcpy(grade, s.grade);
        age = s.age;
        totalMarks = s.totalMarks;
        percentage = s.percentage;
    }
    void output() {
        cout << "\nName: " << name << "\nAddress: " << address << "\nGender: " << gender
             << " Age: " << age << " Total Marks: " << totalMarks << " Percentage: " << percentage
             << " Grade: " << grade;
    }

// Destructor
    ~Student() {
        cout << "\nObject Destroyed";
    }
};

int main() {
    Student s1("Sayan Banik", "Coochbehar, West Bengal", "Male", 19, 489, 97.8, "AA");
    Student s2(s1);

    s1.output();
    cout << "\n";
    s2.output();

    return 0;
}
