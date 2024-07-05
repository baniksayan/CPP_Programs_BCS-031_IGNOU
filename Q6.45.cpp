#include <iostream>
using namespace std;

int main() {
  int n, reverse_num = 0, digit;

  cout << "Enter a number: ";
  cin >> n;

  while (n != 0) {
    digit = n % 10;
    reverse_num = reverse_num * 10 + digit;
    n = n / 10;
  }

  int sum = n + reverse_num;

  cout << "Sum of the number and its reverse is: " << sum << endl;

  return 0;
}
