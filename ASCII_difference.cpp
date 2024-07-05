/* WAP to find the difference between ASCII of two characters ,take them as input . */

#include <iostream>
using namespace std;

int main() {
  char ch1, ch2;
  int diff;

  cout << "Enter two characters: ";
  cin >> ch1 >> ch2;

  // Get the ASCII values of the two characters
  int ASCII_1 = (int)ch1;
  int ASCII_2 = (int)ch2;

  // Calculate the difference between the ASCII values
  diff = ASCII_2 - ASCII_1;

  // Print the difference
  cout << "The difference between the ASCII values of " << ch1 << " and " << ch2 << " is " << diff << endl;

  return 0;
}
