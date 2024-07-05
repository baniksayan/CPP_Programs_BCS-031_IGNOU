#include <iostream>
using namespace std;

long long factorial(long long n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    long long num;
    cout << "Please enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "The factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;
}
