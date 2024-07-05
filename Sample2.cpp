#include <iostream>
using namespace std;

int main() {

    int i = 97;
    while (i <= 122) {
        cout << (char)i << " " << i << endl;
        i++;
    }

cout<<endl<<endl;

    for (int i=65; i<=90; i++) {
        cout << (char)i << " " << i << endl;
    }

    return 0;
}
