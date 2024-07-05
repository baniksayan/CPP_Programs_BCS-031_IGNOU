/*Write a program in C++ to add two 3 x 3 matrices.
Define proper class, constructor, destructor and methods in the program.*/

#include <iostream>
using namespace std;

class Matrix {
public:
  // Default constructor
  Matrix() {}

  // Parameterized constructor that takes two 3x3 matrices and adds them element-wise
  Matrix(int a[3][3], int b[3][3]) {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        this->data[i][j] = a[i][j] + b[i][j];
        // Add elements from matrices 'a' and 'b' and store the result in 'data' matrix
      }
    }
  }

  // Method to display the elements of the matrix
  void display() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cout << this->data[i][j] << " "; // Display each element of the matrix separated by spaces
      }
      cout << endl; // Move to the next row after displaying each row
    }
  }

private:
  int data[3][3]; // Private member to store the matrix data
};

int main() {
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int b[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

  Matrix m(a, b); // Create a Matrix object 'm' by adding matrices 'a' and 'b'
  m.display(); // Display the resulting matrix

  return 0;
}
