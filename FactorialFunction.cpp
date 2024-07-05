// Write a function to find the factorial of a number.
#include <iostream>
using namespace std;

// Function to calculate the factorial
int calculateFactorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Please enter the value to calculate the factorial: ";
    cin >> n;

    int factorialResult = calculateFactorial(n);

    cout << "The factorial is: " << factorialResult << endl;

    return 0;
}
