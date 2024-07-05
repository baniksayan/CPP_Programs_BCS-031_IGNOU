/*Write a program in C++ to open an existing file and
insert the text "File program in C++" at the end of it.
Your program should have suitable comments for each line of code.*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Declare a file stream object.
  fstream myfile;

  // Open the file in append mode.
  myfile.open("myfile.txt", ios::app);

  // Check if the file was opened successfully.
  if (myfile.is_open()) {
    // Insert the text "File program in C++" at the end of the file.
    myfile << "File program in C++";
  } else {
    // Print an error message if the file could not be opened.
    cout << "Error opening file!" << endl;
  }

  // Close the file.
  myfile.close();

  return 0;
}
