/*Write a C++ program to find out the sum of n numbers,
by defining proper class, constructor and methods.*/

#include <iostream>
using namespace std;

class NumberSum {
private:
    int sum;

public:
    // Constructor to initialize the sum to 0
    NumberSum() {
        sum = 0;
    }

    // Method to add numbers to the sum
    void addNumber(int num) {
        sum += num;
    }

    // Method to get the current sum value
    int getSum() {
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    NumberSum numSum; // Creating an instance of the NumberSum class

    for (int i = 0; i < n; i++) {
        int num;
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        numSum.addNumber(num);
    }

    cout << "The sum of the " << n << " numbers is: " << numSum.getSum() << endl;

    return 0;
}
