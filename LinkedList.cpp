#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

int main() {
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    cout << "Address is: " << &a << "." << endl;
    cout << "Next value is: " << a.next << "." << endl;

    return 0;
}
