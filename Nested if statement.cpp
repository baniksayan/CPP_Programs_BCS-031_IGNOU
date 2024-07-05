/* Create a program that asks the user for two numbers and
displays whether the first number is divisible by the second number.
If not, display the remainder. */

#include <iostream>
using namespace std;

int main() {
  int firstNumber, secondNumber;

  cout << "Enter the first number: ";
  cin >> firstNumber;

  cout << "Enter the second number: ";
  cin >> secondNumber;

  if (firstNumber % secondNumber == 0) {
    cout << "The first number is divisible by the second number." << endl;
  } else {
    cout << "The first number is not divisible by the second number. The remainder is " << firstNumber % secondNumber << endl;
  }

  return 0;
}
