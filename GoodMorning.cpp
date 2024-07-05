#include <iostream>
using namespace std;

void printGoodMorning(int n) { //3
    // Base case: If n is 0, stop the recursion
    if (n == 0) { //3 != 0, 
        return;
    }

    // Print "Good morning"
    cout << "Good morning" << endl; // 1, 

    // Recursively call the function with n-1
    printGoodMorning(n - 1);
}

int main() {
    int n;

    cout << "Enter the value of 'n': ";
    cin >> n; //3

    if (n < 1) {
        cout << "Please enter a positive integer." << endl;
    } else {
        printGoodMorning(n); //3
    }

}
