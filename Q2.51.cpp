/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value for 'N': ";
    cin >> n;

    // Outer loop controls the number of rows
    for (int i = n; i >= 1; i--) {
        // Inner loop prints the numbers in each row
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }
        // Move to the next line after completing a row
        cout << endl;
    }
    return 0;
}
