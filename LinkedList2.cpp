#include <iostream>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data; // data stored in the node
    Node* next; // pointer to the next node in the list

    // Constructor to initialize a node with given data and a null next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class represents the linked list
class LinkedList {
private:
    Node* head; // pointer to the first node in the list

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the beginning of the list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value); // create a new node
        newNode->next = head; // set the new node's next pointer to the current head
        head = newNode; // update the head to the new node
    }

    // Function to print the elements of the linked list
    void display() {
        Node* current = head; // start from the head of the list

        // Traverse the list and print each element
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next; // move to the next node
        }

        cout << endl;
    }
};

int main() {
    // Create a linked list
    LinkedList myList;

    // Insert elements at the beginning of the list
    myList.insertAtBeginning(3);
    myList.insertAtBeginning(2);
    myList.insertAtBeginning(1);

    // Display the elements of the list
    cout << "Linked List: ";
    myList.display();

    return 0;
}
