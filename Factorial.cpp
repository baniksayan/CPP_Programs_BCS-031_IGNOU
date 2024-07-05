/*Write a program in C++ to find the factorial of a given number.*/

#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  int factorial = 1;
  
  // Calculate the factorial of the number using a 'for' loop
  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  // Display the factorial of the number
  cout << "The factorial of " << n << " is " << factorial << endl;

  return 0;
}
