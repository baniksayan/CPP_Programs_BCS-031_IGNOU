#include <iostream>
using namespace std;

class ABC {
private:
    int valueA, valueB, valueC;

public:
    void inputValues() {
        cout << "Enter the value for A: ";
        cin >> valueA;
        cout << "\nEnter the value for B: ";
        cin >> valueB;
        cout << "\nEnter the value for C: ";
        cin >> valueC;
    }

    void outputValues() {
        cout << "\nA = " << valueA
             << "\nB = " << valueB
             << "\nC = " << valueC;
    }
};

class DEF : public ABC {
private:
    int valueD, valueE, valueF;

public:
    void inputValues() {
        ABC::inputValues(); // Call inputValues() from ABC
        cout << "\nEnter the value for D: ";
        cin >> valueD;
        cout << "\nEnter the value for E: ";
        cin >> valueE;
        cout << "\nEnter the value for F: ";
        cin >> valueF;
    }

    void outputValues() {
        ABC::outputValues(); // Call outputValues() from ABC
        cout << "\nD = " << valueD
            << "\nE = " << valueE
            << "\nF = " << valueF;
    }
};

class GHI : public ABC {
private:
    int valueG, valueH, valueI;

public:
    void inputValues() {
        ABC::inputValues(); // Call inputValues() from ABC
        cout << "\nEnter the value for G: ";
        cin >> valueG;
        cout << "\nEnter the value for H: ";
        cin >> valueH;
        cout << "\nEnter the value for I: ";
        cin >> valueI;
    }

    void outputValues() {
        ABC::outputValues(); // Call outputValues() from ABC
        cout << "\nG = " << valueG
            << "\nH = " << valueH
            << "\nI = " << valueI;
    }
};

int main() {
    DEF obj1;
    GHI obj2;

    cout << "Object 1:\n";
    obj1.inputValues();
    obj1.outputValues();

    cout << "\n\nObject 2:\n";
    obj2.inputValues();
    obj2.outputValues();

    return 0;
}
