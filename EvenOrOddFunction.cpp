// Write a function to check if a number is even or odd.
#include<iostream>
using namespace std;

void evenOrOdd(int n) {
    if (n % 2 == 0) {
        cout << "Even Number.";
    }
    else {
        cout << "Odd Number.";
    }
}

int main() {
    int n;
    cout << "Please enter a number to check if the number is even or not: ";
    cin >> n;

    cout << "The number you entered is: " << n << endl;
     evenOrOdd(n); // Call the function with the input number.
    
    return 0;
}
