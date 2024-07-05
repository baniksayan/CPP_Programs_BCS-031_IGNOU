/*Write a C++ program to implement simple calculator to perform ‘+’, ‘–’, ‘*’, ‘/’ on two operands.
Your program should have methods for reading data and for performing arithmetic operations.*/

#include <iostream>
using namespace std;

// Function to read two operands
void readOperands(int& num1, int& num2) {
  cout << "Enter two operands: ";
  cin >> num1 >> num2;
}

// Function to perform arithmetic operations
int performOperation(char op, int num1, int num2) {
  int result;
  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      cout << "Invalid operator!" << endl;
      return -1;
  }
  return result;
}

// Main function
int main() {
  char op;
  int num1, num2, result;

  // Read two operands
  readOperands(num1, num2);

  // Get the operator from the user
  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;

  // Perform the arithmetic operation
  result = performOperation(op, num1, num2);

  // Print the result
  if (result != -1) {
    cout << "Result = " << result << endl;
  }

  return 0;
}
