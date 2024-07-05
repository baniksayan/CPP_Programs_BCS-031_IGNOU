/* Write a C++ program that takes a character as input and
determines whether it is a vowel or a consonant. */

#include<iostream>
using namespace std;

int main() {
    char a;

    cout << "Checking whether the letter is a vowel or not." << endl;

    cout << "Please enter a letter between A-Z: ";
    cin >> a;

    if (a == 'a' || a == 'A' ||
        a == 'e' || a == 'E' ||
        a == 'i' || a == 'I' ||
        a == 'o' || a == 'O' ||
        a == 'u' || a == 'U')
        {
        cout << "The given input is a Vowel." << endl;
    } else {
        cout << "The given input is a Consonant." << endl;
    }

    return 0;
}
