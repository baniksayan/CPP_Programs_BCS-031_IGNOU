#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

class Book {
public:
    int id;
    string title;
    string genre;
};

class User {
public:
    int id;
    string name;
    map<int, int> ratings; // Book ID to rating mapping
};

vector<Book> books;
vector<User> users;

void loadBooks() {
    // Load book data from a file or database
    // Fill the 'books' vector with Book objects
}

void loadUsers() {
    // Load user data from a file or database
    // Fill the 'users' vector with User objects
}

double predictRating(User& user, Book& book) {
    // Simplified prediction function
    // Calculate the average user rating and return it as the predicted rating
    int totalRatings = 0;
    for (const auto& rating : user.ratings) {
        totalRatings += rating.second;
    }
    double averageRating = totalRatings / static_cast<double>(user.ratings.size());
    return averageRating;
}

int main() {
    loadBooks();
    loadUsers();

    int userId, bookId;
    cout << "Enter user ID: ";
    cin >> userId;

    cout << "Enter book ID: ";
    cin >> bookId;

    // Find the user and book based on input IDs
    User* user = nullptr;
    for (auto& u : users) {
        if (u.id == userId) {
            user = &u;
            break;
        }
    }

    Book* book = nullptr;
    for (auto& b : books) {
        if (b.id == bookId) {
            book = &b;
            break;
        }
    }

    if (user && book) {
        double predictedRating = predictRating(*user, *book);
        cout << "Predicted rating for book '" << book->title << "' by user '" << user->name << "': " << predictedRating << endl;
    } else {
        cout << "User or book not found." << endl;
    }

    return 0;
}
