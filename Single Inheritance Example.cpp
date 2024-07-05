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

class DEF: public ABC {
private:
    int valueD, valueE, valueF;
    
public:
    void inputValues() {
        cout << "\nEnter the value for D: ";
        cin >> valueD;
        cout << "\nEnter the value for E: ";
        cin >> valueE;
        cout << "\nEnter the value for F: ";
        cin >> valueF;
    }
    
    void outputValues() {
        cout << "\nD = " << valueD
             << "\nE = " << valueE
             << "\nF = " << valueF;
    }
};

int main() {
    DEF obj;
    obj.inputValues();
    obj.outputValues();
    obj.inputValues();
    obj.outputValues();
    
    return 0;
}
