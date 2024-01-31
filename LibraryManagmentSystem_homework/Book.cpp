//
// Created by Annie on 31.1.2024 г..
//

#include "Book.h"

const string &Book::getTitle() const {
    return title;
}

void Book::setTitle(const string &title) {
    Book::title = title;
}

const string &Book::getAuthor() const {
    return author;
}

void Book::setAuthor(const string &author) {
    Book::author = author;
}

const string &Book::getIsen() const {
    return ISEN;
}

void Book::setIsen(const string &isen) {
    ISEN = isen;
}

Book::Book(string title, string author, string ISEN) {
    setTitle(title);
    setAuthor(author);
    setIsen(ISEN);
}

void Book::display() {
    cout << "Book title: " << this->getTitle() << endl << "Author: " << this->getAuthor() << endl << "ISEN: " << this->getIsen(); //display books
}

