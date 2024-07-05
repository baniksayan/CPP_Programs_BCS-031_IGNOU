#include <iostream>
#include <climits>
using namespace std;

int main()
{
    // selection sort is an unstable algorithm
    int arr[] = {5, 30, 1, 4, 2};
    int n = 5;

    for (int ele : arr)
    {
        cout << ele << " ";
    }
    cout << endl;

    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindx = -1;

        // Find the minimum element in the unsorted portion of the array
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }

        // Swap the minimum element with the current element (arr[i])
        swap(arr[i], arr[mindx]); // Using the inbuilt swap function.
    }

    // Print the sorted array
    for (int ele : arr)
    {
        cout << ele << " ";
    }

    return 0;
}
