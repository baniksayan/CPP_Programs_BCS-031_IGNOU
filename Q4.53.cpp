/*
Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value for 'n': ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Check if the current row is odd or even
        if (i % 2 == 1) {
            // Odd row: Print numbers from 1 to i
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
        } else {
            // Even row: Print characters from 'A' to 'A' + i - 1
            for (char c = 'A'; c < 'A' + i; c++) {
                cout << c << " ";
            }
        }
        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}
