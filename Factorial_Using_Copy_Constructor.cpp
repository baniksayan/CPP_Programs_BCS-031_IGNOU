/*Write a program to calculate the factorial of a given number by using copy constructor.
Also write comments in your program wherever required.*/

#include <iostream>
using namespace std;

class Factorial {
public:
  int fact, num, i;

  // Constructor
  Factorial(int n) {
    num = n;
    fact = 1;
  }

  // Copy constructor
  Factorial(const Factorial &f) {
    num = f.num;
    fact = f.fact;
  }

  // Calculate factorial
  void calculate() {
    for (i = 1; i <= num; i++) {
      fact = fact * i;
    }
  }

  // Display factorial
  void display() {
    cout << "Factorial of " << num << " is " << fact << endl;
  }
};

int main() {
  int num;

  // Get number from user
  cout << "Enter a number: ";
  cin >> num;

  // Create a Factorial object
  Factorial f(num);

  // Calculate factorial
  f.calculate();

  // Display factorial
  f.display();

  return 0;
}
