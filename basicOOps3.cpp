#include<iostream>
using namespace std;

class abc {
private:
    int n;
public:
    void bcd() {
        cout << "Enter a value: ";
        cin >> n;
        cout << "Entered value is: " << n << "." << endl;
    }
};

int main() {
    abc g;
    g.bcd();
    return 0;
}
