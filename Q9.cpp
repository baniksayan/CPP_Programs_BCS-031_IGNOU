#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input a character
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        cout << "Alphabet" << endl;
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        cout << "Digit" << endl;
    }
    // If not an alphabet or a digit, consider it a special character
    else {
        cout << "Special character" << endl;
    }

    return 0;
}
