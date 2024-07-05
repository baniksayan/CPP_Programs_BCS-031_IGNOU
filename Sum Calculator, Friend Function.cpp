#include<iostream>
using namespace std;

// Function declaration
int calculateSum(int, int, int);

class InputValues {
    private:
        int value1; // Variables to store the first, second and third value
        int value2;
        int value3;
    
    public:
        void input() {
            cout << "Enter the value for value1: ";
            cin >> value1;
            cout << "Enter the value for value2: ";
            cin >> value2;
            cout << "Enter the value for value3: ";
            cin >> value3;
        }
        
        friend int calculateSum(int, int, int); // Friend function declaration
        
        void output() {
            cout << "value1 = " << value1
                 << " value2 = " << value2
                 << " value3 = " << value3
                 << " sum = " << calculateSum(value1, value2, value3)<<endl<<endl; // Output the values and sum
        }
};

class InputValues2 {
    private:
        int value4; // Variable to store the fourth, fifth and sixth value
        int value5;
        int value6;
    
    public:
        void input() {
            cout << "Enter the value for value4: ";
            cin >> value4;
            cout << "Enter the value for value5: ";
            cin >> value5;
            cout << "Enter the value for value6: ";
            cin >> value6;
        }
        
        friend int calculateSum(int, int, int); // Friend function declaration
        
        void output() {
            cout << "value4 = " << value4
                 << " value5 = " << value5
                 << " value6 = " << value6
                 << " sum = " << calculateSum(value4, value5, value6)<<endl<<endl; // Output the values and sum
        }
};

class InputValues3 {
    private:
        int value7; // Variable to store the seventh, eight, ninth value
        int value8;
        int value9;
    
    public:
        void input() {
            cout << "Enter the value for value7: ";
            cin >> value7;
            cout << "Enter the value for value8: ";
            cin >> value8;
            cout << "Enter the value for value9: ";
            cin >> value9;
        }
        
        friend int calculateSum(int, int, int); // Friend function declaration
        
        void output() {
            cout << "value7 = " << value7
                 << " value8 = " << value8
                 << " value9 = " << value9
                 << " sum = " << calculateSum(value7, value8, value9)<<endl<<endl; // Output the values and sum
        }
};

int calculateSum(int a, int b, int c) {
    return (a + b + c); // Calculate and return the sum of three integers
}

int main() {
    InputValues values1; // Create an object of InputValues class
    InputValues2 values2; // Create an object of InputValues2 class
    InputValues3 values3; // Create an object of InputValues3 class
    
    values1.input(); // Call the input function for values1 object
    values1.output(); // Call the output function for values1 object
    
    values2.input(); // Call the input function for values2 object
    values2.output(); // Call the output function for values2 object
    
    values3.input(); // Call the input function for values3 object
    values3.output(); // Call the output function for values3 object
    
    return 0;
}

