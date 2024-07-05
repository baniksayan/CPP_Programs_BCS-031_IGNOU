// display this ap- 100, 97, 94,... upto all terms which are positive.
#include <iostream>
using namespace std;

int main() {
    int a = 100;  // The first term of the arithmetic progression
    int b = -3;  // The common difference between consecutive terms
    
    cout << "Arithmetic Progression(AP): " << a << ", ";

    // Displaying the first term
    cout << a << ", ";
    
    // Generating and displaying subsequent positive terms using a for loop
    for (int c = a + b; c > 0; c += b) {
        cout << c;
        
        // Displaying a comma and space if there will be another positive term
        if (c - b > 0) {
            cout << ", ";
        }
    }
    
    cout << "..." << endl;

    return 0;
}
