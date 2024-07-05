//Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Please Enter The Value for 'N': ";
    cin >> n;

    int a = 4;  // First term of the AP
    int b = 3; // Common difference between terms

    cout << "AP with " << n << "th terms: ";

    for (int i = 0; i < n; i++) {
        cout << a + i * b << " "; // Which menans, 4 + i * 3
    }

    return 0;
}
