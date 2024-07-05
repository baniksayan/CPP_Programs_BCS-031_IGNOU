#include <iostream>

using namespace std;

int main() {
  int num, originalNum, remainder, temp, n;
  cout << "Enter a number: ";
  cin >> num;

  originalNum = num;
  n = 0;

  while (originalNum != 0) {
    originalNum /= 10;
    n++;
  }

  int sum = 0;
  originalNum = num;

  while (originalNum != 0) {
    remainder = originalNum % 10;
    sum += remainder * remainder * remainder;
    originalNum /= 10;
  }

  if (sum == num) {
    cout << num << " is an Armstrong number.";
  } else {
    cout << num << " is not an Armstrong number.";
  }

  return 0;
}
