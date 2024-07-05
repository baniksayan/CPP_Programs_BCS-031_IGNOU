#include <iostream>

int main() {
    using namespace std;

    int base, exponent;
    long long result = 1;

    // Input base and exponent from user
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Calculate power using a loop
    while (exponent > 0) {
        result *= base;
        exponent--;
    }

    // Display the result
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
