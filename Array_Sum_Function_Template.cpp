/* Write a program in C++ to find the sum of elements in an array using Function Template.
Make necessary assumptions. */

#include <iostream>
using namespace std;

// Function Template to find the sum of elements in an array
template <typename T, int size>
T arraySum(T (&arr)[size]) {
    T sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Assumption: The array contains integer elements
    int myArray[] = {1, 2, 3, 4, 5};

    // Finding the sum of elements using the Function Template
    int sum = arraySum(myArray);

    // Displaying the result
    cout << "Sum of elements: " << sum << endl;

    return 0;
}
