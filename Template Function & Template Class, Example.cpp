#include<iostream>
using namespace std;

template <class T>
class Sum {
    T num1, num2, num3, sum;
    public:
    Sum(T x, T y, T z) {
        num1 = x;
        num2 = y;
        num3 = z;
    }
    T add() {
        return(num1 + num2 + num3);
    }
    void display() {
        sum = add();
        cout << "Number 1 = " << num1 << endl;
        cout << "Number 2 = " << num2 << endl;
        cout << "Number 3 = " << num3 << endl;
        cout << "Sum = " << sum << endl;
    }
};

int main() {
    // Create an object of Sum class with integer type
    Sum<int> obj1(20, 30, 40);
    
    // Create an object of Sum class with float type
    Sum<float> obj2(23.55f, 67.788f, 544.788f);

    // Display the values of the objects
    obj1.display();
    obj2.display();

    return 0;
}
