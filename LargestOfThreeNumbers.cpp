/*Write a program in C++,
to find the largest of given three numbers by using a member function defined in a class.*/

#include <iostream>
using namespace std;

// Define a class called FindLargest
class FindLargest {
private:
    int num1, num2, num3;

public:
    // Member function to take input for the three numbers
    void inputNumbers() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    // Member function to find the largest number among the three
    int findLargest() {
        int largest = num1;

        // Check if num2 is larger than the current largest
        if (num2 > largest)
            largest = num2;

        // Check if num3 is larger than the current largest
        if (num3 > largest)
            largest = num3;

        return largest;
    }
};

int main() {
    // Create an object of the FindLargest class
    FindLargest obj;

    // Call the member function to take input from the user
    obj.inputNumbers();

    // Call the member function to find the largest number
    int result = obj.findLargest();

    // Display the result
    cout << "The largest number is: " << result << endl;

    return 0;
}
