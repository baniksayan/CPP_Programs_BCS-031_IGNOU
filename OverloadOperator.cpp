/*Write a program to implement the overloading of << operator.*/

#include <iostream>
using namespace std;

class MyClass {
public:
  int value;

  MyClass(int value) {
    this->value = value;
  }

  // Declare the operator<< as a friend function.
  friend ostream& operator<<(ostream& os, const MyClass& obj);
};

// Define the operator<< outside the class.
ostream& operator<<(ostream& os, const MyClass& obj) {
  os << obj.value;
  return os;
}

int main() {
  MyClass obj(10);
  cout << obj << endl; // Should now print "10"

  return 0;
}
