/* Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4 */
#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value for 'N': ";
    cin >> n;

    // Outer loop controls the rows
    for (int i = 1; i <= n; i++) {
        // Inner loop controls the columns within each row
        for (int j = 1; j <= n; j++) {
            // Print the current row number followed by a space
            cout << i << " ";
        }
        // Move to the next line after completing a row
        cout << endl;
    }

    return 0;
}
