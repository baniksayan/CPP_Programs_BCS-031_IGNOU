/*
Print the following pattern
Input n = 4
Output: 
*
**
***
****
***
**
*
*/
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value for 'n': ";
    cin >> n;

    // Upper half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the pattern
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
