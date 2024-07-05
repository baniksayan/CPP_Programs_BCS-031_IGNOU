/*Write a program in C++ to open an existing file and
insert the text ‘‘File program in C++’’ at the end of the file.
Your program should have suitable comments.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Open the file in append mode.
  fstream file("my_file.txt", ios::app);

  // Check if the file was opened successfully.
  if (!file) {
    cout << "Error opening file!" << endl;
    return 1;
  }

  // Insert the text at the end of the file.
  file << "File program in C++" << endl;

  // Close the file.
  file.close();

  return 0;
}
