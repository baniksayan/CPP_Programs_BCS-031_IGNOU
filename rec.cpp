#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n <= 5) {
        cout << " " << n;
        printNumbers(n + 1);
    }
}

int main() {
    printNumbers(1);
    return 0;
}
