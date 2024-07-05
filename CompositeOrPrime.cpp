#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool flag = true; // Initialize the flag as true, assuming the number is prime

    // Loop through numbers from 2 to n-1 to check for factors
    for (int i = 2; i <= n-1; i++) {
        if (n % i == 0) { // Check if 'i' is a factor of 'n'
            flag = false; // If a factor is found, set the flag to false (number is not prime)
            break; // No need to check further, exit the loop
        }
    }

    // Special case: 1 is neither prime nor composite
    if (n == 1) {
        cout << n << " is neither prime nor composite.";
    }
    // If flag is true, the number is prime
    else if (flag == true) {
        cout << n << " is a prime number.";
    }
    // If flag is false, the number is composite
    else {
        cout << n << " is a composite number.";
    }

    return 0;
}
