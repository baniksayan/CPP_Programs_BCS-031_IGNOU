/*Write a short program to implement the concept of passing object as argument, in C++.*/

#include <iostream>
#include <string>

using namespace std;

// Define a simple class called 'Book'
class Book {
public:
    // Constructor
    Book(string title, string author) : title(title), author(author) {}

    // Function to display information about the book
    void displayInfo() const {
        cout << "Title: " << title << ", Author: " << author << endl;
    }

private:
    string title;
    string author;
};

// Function that takes a 'Book' object as an argument
void printBookInfo(const Book& book) {
    cout << "Printing book information from function:" << endl;
    book.displayInfo();
}

int main() {
    // Create a 'Book' object
    Book book1("From Messenger to Forever", "Sayan Banik");

    // Call the function passing the 'Book' object as an argument
    printBookInfo(book1);

    return 0;
}
