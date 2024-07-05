#include<iostream>
using namespace std; // Include the iostream library and use the std namespace

class NUMBER { // Define a class named "NUMBER"
private:
    int num1, num2, num3; // Private variables to store the three numbers: num1, num2, num3

public:
    NUMBER(int n1, int n2, int n3) { // Parameterized constructor to initialize the member variables
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }

    int largest() { // Function to find the largest number among the three member variables
        int largestNum = num1; // Assume num1 is the largest initially

        if (num2 > largestNum) // Check if num2 is greater than the current largest number
            largestNum = num2;

        if (num3 > largestNum) // Check if num3 is greater than the current largest number
            largestNum = num3;

        return largestNum; // Return the largest number
    }
};

int main() { // The main function where the program execution starts
    int num1, num2, num3; // Declare variables to store the input integers

    cout << "Enter the three Integers: ";
    cin >> num1 >> num2 >> num3; // Read three integers from the user

    NUMBER numOBJECT(num1, num2, num3); // Create an object of the NUMBER class with the input integers

    int largestNum = numOBJECT.largest(); // Call the largest() function to find the largest number

    cout << "The largest number is: \n" << largestNum; // Print the result: the largest number

    return 0; // Indicate successful program execution
}
