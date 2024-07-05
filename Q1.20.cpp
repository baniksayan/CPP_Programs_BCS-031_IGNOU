#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (a > b) {
        cout << "First number " << a << " is the largest." << endl;
    } else {
        cout << "Second number " << b << " is the largest." << endl;
    }

    return 0;
}
