/*Write a program in C++ to open an existing file and
insert the text "My C++ file" at the end of it.
Incorporate suitable comments, to improve the code readability.*/

#include <iostream>
#include <fstream> // For file input/output operations
using namespace std;

int main() {
    // File name and path of the existing file
    string filename = "existing_file.txt";

    // Open the file in append mode (ios::app) to add content at the end
    ofstream outFile(filename, ios::app);

    // Check if the file was opened successfully
    if (!outFile) {
        cout << "Error opening the file: " << filename << endl;
        return 1;
    }

    // Text to be inserted at the end of the file
    string newText = "My C++ file";

    // Write the new text to the file
    outFile << newText;

    // Close the file after writing
    outFile.close();

    cout << "Text has been added to the file successfully." << endl;

    return 0;
}
