// Write a function to print the sum of two numbers.
#include <iostream>
using namespace std;

int sum(int a, int b)
{                 // creating the function in 'sum'
    return a + b; // calculating values
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "The sum is: " << sum(a, b); // using the function from 'sum'

    return 0;
}
