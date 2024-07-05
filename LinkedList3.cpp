#include <iostream>
using namespace std;

template <class T>
class LinkedList {
    struct Node {
        T data;
        Node* next;
    };
    Node* head;
    Node* tail;
public:
    LinkedList() {
        head = NULL;
        tail = NULL;
    }
    void add(T data) {
        Node* node = new Node;
        node->data = data;
        node->next = NULL;
        if (head == NULL) {
            head = node;
            tail = node;
        }
        else {
            tail->next = node;
            tail = node;
        }
    }
    void print() {
        Node* node = head;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList<int> list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.print();
    return 0;
}
