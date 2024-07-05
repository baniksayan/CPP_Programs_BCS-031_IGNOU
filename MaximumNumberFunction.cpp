//Write a function to find the maximum of two numbers.
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Please enter the first number: ";
    cin >> a;
    cout << "Please enter the second number: ";
    cin >> b;

    if (a == b) {
        cout << "Sorry, you've entered the same digit input" << endl;
        cout << "Please try again!";
    } else if (a <= 0 || b <= 0) {
        cout << "Please enter positive integers"<<endl;
        cout << "Please try again!";
    } else if (a > b) {
        cout << "Maximum number is: " << a;
    } else {
        cout << "Maximum number is: " << b;
    }

    return 0;
}
