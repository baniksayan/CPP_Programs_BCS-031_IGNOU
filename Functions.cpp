#include<iostream>
using namespace std;

int SayanBanik(int x, int y) {
    return x + y;
}

int main() {
    int n;
    
    cout << "Enter a value for n: ";
    cin >> n;

    int result = SayanBanik(5, n);
    
    cout << "Result: " << result << endl;

    return 0;
}
