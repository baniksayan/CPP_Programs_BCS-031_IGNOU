#include <iostream>
#include<algorithm>
using namespace std;

// implementation of the Bubble Sort algorithm

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 9; // I should use n = 9 for an array of size 9

    // Original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Bubble sort optimized
    for (int i = 0; i < n - 1; i++) { // n-1 passes
        // Traverse
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) { // Swap
                swap(arr[j], arr[j + 1]); // InBuilt SWAP Function
                flag = false;
            }
        }
        if (flag==true) { //swap didn't happen
        break;
        }
    }
    // Time complexity:

    // Worst Case: "O(n^2)"
    // Avg. Case: "O(n^2)"
    // Best Case: "O(n)"

    cout << endl << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
