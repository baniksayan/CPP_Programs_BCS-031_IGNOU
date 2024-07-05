#include<iostream>
using namespace std;

// Class for performing operations on an array
class ArrayOperations {
    private:
    int arr[20], n; // Private member variables

    public:
    void input() {
        cout << "\nEnter the value for n: ";
        cin >> n;
    }

    void getData();
    void performOperations();
    void sortArray();
    void output();
};

void ArrayOperations::getData() {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter the " << i << "th element: ";
        cin >> arr[i];
    }
}

void ArrayOperations::performOperations() {
    int max, min, sum;
    max = min = sum = arr[0];

    // Finding maximum, minimum, and sum of elements
    for(int i = 1; i < n; i++) {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
        sum += arr[i];
    }

    float avg = sum / n; // Calculating average
    cout << "\nMaximum value is: " << max
        << "\nMinimum value is: " << min
        << "\nSum of elements: " << sum
        << "\nAverage value is: " << avg;
}

void ArrayOperations::sortArray() {
    int i, j, temp;
    // Bubble sort algorithm to sort the array in ascending order
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ArrayOperations::output() {
    cout << "\nThe array elements are as follows:\n";
    // Displaying the elements of the array
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    ArrayOperations obj;
    obj.input(); // Taking input for the size of the array
    obj.getData(); // Taking input for the elements of the array
    obj.performOperations(); // Performing operations on the array
    obj.sortArray(); // Sorting the array
    obj.output(); // Displaying the array elements
    return 0;
}
