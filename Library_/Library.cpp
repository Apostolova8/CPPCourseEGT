// Library.cpp
#include "Library.h"
#include "Book.h"
#include <iostream>

using namespace std;

void Library::addBook(Book b) {
    this->books.push_back(b);
}

void Library::print() {
    for (Book book : books){
        book.print();
    }
}

void Library::searchByAuthor(string searchAuthor) {
    cout << "Find book by author's name: " << endl;
    for (Book book: books) {
        if (book.getAuthor().getFirstName() == searchAuthor || book.getAuthor().getLastName() == searchAuthor) {
            cout << "Book is: " << book.getBookName() << "\n" << "Author is: " << book.getAuthor().getFirstName() << " " << book.getAuthor().getLastName() << "\n" <<
            "Genre is: " << book.getGenre() << "\n" << "Published year is: " << book.getYear() << endl;
        }
    }
}

void Library::searchByName(string word) {
    cout << "Find book by it's name: " << word << ":" << endl;
    for (Book book: books) {
        if (book.getBookName().find(word) != string::npos) {
            cout << "Book is: " << book.getBookName() << "\n" << "Author is: " << book.getAuthor().getFirstName() << " " << book.getAuthor().getLastName() << "\n" <<
                 "Genre is: " << book.getGenre() << "\n" << "Published year is: " << book.getYear() << endl;
        }
    }
}
