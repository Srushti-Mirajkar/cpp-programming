#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int id;
    string title;
    string author;

    Book() : id(0), title(""), author("") {}
    Book(int i, string t, string a) : id(i), title(t), author(a) {}
};

class Library {
private:
    static const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int bookCount;
public:
    Library() : bookCount(0) {}

    void addBook(int id, string title, string author) {
        if (bookCount < MAX_BOOKS) {
            books[bookCount++] = Book(id, title, author);
            cout << "Book added successfully!" << endl;
        } else {
            cout << "Library is full!" << endl;
        }
    }

    void displayBooks() {
        if (bookCount == 0) {
            cout << "No books in the library." << endl;
            return;
        }
        cout << "\nLibrary Books:" << endl;
        for (int i = 0; i < bookCount; i++) {
            cout << "ID: " << books[i].id << " | Title: " << books[i].title << " | Author: " << books[i].author << endl;
        }
    }

    void searchBook(int id) {
        for (int i = 0; i < bookCount; i++) {
            if (books[i].id == id) {
                cout << "Book Found - ID: " << books[i].id << " | Title: " << books[i].title << " | Author: " << books[i