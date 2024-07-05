#include <iostream>
using namespace std;

int main()
{
    char ch1, ch2;

    cout << "Enter two characters: ";
    cin >> ch1 >> ch2;

    int ascii1 = int(ch1);
    int ascii2 = int(ch2);

    int diff = ascii1 - ascii2;

    cout << "The difference between ASCII of " << ch1 << " and " << ch2 << " is " << diff << endl;

    return 0;
}
