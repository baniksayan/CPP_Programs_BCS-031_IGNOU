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

class GHI : public DEF {
private:
    int valueG, valueH, valueI;

public:
    void inputValues() {
        DEF::inputValues(); // Call inputValues() from DEF
        cout << "\nEnter the value for G: ";
        cin >> valueG;
        cout << "\nEnter the value for H: ";
        cin >> valueH;
        cout << "\nEnter the value for I: ";
        cin >> valueI;
    }

    void outputValues() {
        DEF::outputValues(); // Call outputValues() from DEF
        cout << "\nG = " << valueG
            << "\nH = " << valueH
            << "\nI = " << valueI <<endl << endl;
    }
};

int main() {
    GHI obj;
    obj.inputValues();
    obj.outputValues();
    obj.inputValues();
    obj.outputValues();

    return 0;
}
