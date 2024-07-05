#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char helper, char destination) {
    if (n == 0)
        return;
    
    towerOfHanoi(n - 1, source, destination, helper);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    towerOfHanoi(n - 1, helper, source, destination);
}

int main() {
    int n;
    cout << "Please enter the number of disks: ";
    cin >> n;

    cout << endl << "The sequence of moves for solving the Tower of Hanoi with " << n << " disks is as follows:" << endl;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
