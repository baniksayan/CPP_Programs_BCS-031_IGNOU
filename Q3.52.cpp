/*
Print the following pattern
Input: n = 4
Output:
A
A B
A B C
A B C D
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value for 'N': ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Outer loop controls the number of rows
        for (int j = 1; j <= i; j++) { // Inner loop prints the characters in each row
            cout << char('A' + j - 1) << " "; // Print the character corresponding to the column (A = 65 in ASCII)
        }
        cout << endl;  // Move to the next line after completing a row
    }
    return 0;
}
