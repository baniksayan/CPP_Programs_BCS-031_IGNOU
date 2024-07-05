#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b, c;

    void input() {
        cout << "Enter the value for a: ";
        cin >> a;
        cout << "Enter the value for b: ";
        cin >> b;
        cout << "Enter the value for c: ";
        cin >> c;
    }

    void output() {
        cout << "A = " << a << endl;
        cout << "B = " << b << endl;
        cout << "C = " << c << endl;
    }

public:
    void calculateSum() {
        input();
        output();

        cout << "Sum = " << a + b + c << endl;
    }
};

int main() {
    Numbers numbers;
    numbers.calculateSum();

    return 0;
}
