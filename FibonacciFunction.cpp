// Write a function to print the Fibonacci sequence up to a given number.
#include <iostream>
using namespace std;

// Function to print the Fibonacci series up to n terms
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if (i == 1) {
            cout << t1;
        } else if (i == 2) {
            cout << ", " << t2;
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            cout << ", " << nextTerm;
        }
    }
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
        return 1;
    }

    printFibonacci(n);
    
    cout << endl; // Add a newline character to improve formatting.

    // return 0;
}
